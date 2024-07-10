// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include "Common.h"
///#include "HNode.h"
#include "Instruction.h"
#include <stack>
#include <variant>
#include <type_traits>
	#include "GameFramework/TouchInterface.h"

#include "HierarchyPathHelper.h"

#include "GDIOTypes.h"
THIRD_PARTY_INCLUDES_START
#include <optional>
#include "../../../../ThirdParty/linqcpp/include/linqcpp/linqcpp.h"
#include <vector>
#include <map>
#include "XPathParserExceptions.h"
#include "GameFramework/TouchInterface.h"
THIRD_PARTY_INCLUDES_END

class HNode;
class StoreResultArgs
{
public:
	StoreResultArgs() {}
	StoreResultArgs(String name, bool keepOnStack = false, bool storeValue = false) { Name = name; KeepOnStack = keepOnStack; StoreValue = storeValue; }
	String Name = TEXT("");
	bool KeepOnStack = false;
	bool StoreValue = false;
};
class StoreResult
{
public:
	StoreResult(String Name) { ResultName = Name; }
	String ResultName = TEXT("");
};

class StringList {
public:
	StringList();
	bool Contains(String r);
	void Add(String s) { list.push_back(s); }
	std::vector<String> list;
};

class IntList {
public:
	IntList();
	bool Contains(int r);
	void Add(int s) { list.push_back(s); }
	std::vector<int> list;
};
class FloatList {
public:
	FloatList();
	bool Contains(float r);
	void Add(float s) { list.push_back(s); }
	std::vector<float> list;
};
class DoubleList {
public:
	DoubleList();
	bool Contains(double r);
	void Add(double s) { list.push_back(s); }
	std::vector<double> list;
};
class VectorList {
public:
	VectorList();
	bool Contains(FVector r);
	void Add(FVector s) { list.push_back(s); }
	std::vector<FVector> list;
};
class ObjectList {
public:
	ObjectList();
	bool Contains(UObject* r);
	void Add(UObject* s) { list.push_back(s); }
	std::vector<UObject*> list;
};

class MapIntPrim {
public:
	MapIntPrim();
	bool ContainsKey(int k);
	void* GetValue(int k);
	void Add(int k, void* v);
	std::map<int, void*> maps;
};

class MapPrimPrim {
public:
	MapPrimPrim();
	bool ContainsKey(void* k);
	void* GetValue(void* k);
	void Add(void* k, void* v);
	std::map<void*, void*> maps;
};
class Type {
public:
	Type(String a);
	String _type;
};

class TouchInputControl {
public:
	TouchInputControl(FString n, FTouchInputControl i) {
		name = n;
		inner = i;
	}
	FString GetName() {
		return name;
	};
	FTouchInputControl inner;
	FString name;

};
class StructHolder {
public:
	StructHolder(void* a, UScriptStruct* b) { StructPtr = a; ScriptStruct = b; };
	void* StructPtr; //= structProperty->ContainerPtrToValuePtr<void>(obj);
	UScriptStruct* ScriptStruct;// = structProperty->Struct;
};


//  7		 8		 9			  10                11			12			13		14      15,		16,			 17,			18	19			20		21			22				23			24		25			26			27			28			29
#define VARIANT_LIST    UObject, AActor, StoreResult, StoreResultArgs, StringList, ObjectList, Type, FVector, FQuat, FVector2D, TouchInputControl, Hit, IntList, FloatList, DoubleList,FLinearColor, FTransform,StructHolder, VectorList, MapIntPrim, MapPrimPrim
template<typename... Args>
using makePtrVariant_t = std::variant<String, int, float, bool, double, size_t, int64, std::add_pointer_t<Args>...>;
using HPathVariant = makePtrVariant_t<VARIANT_LIST>;

enum class Variants {
	String, //0
	Int,    //1
	Float,  //2
	Bool,   //3
	Double, //4
	Size_t, //5
	int64, //6
	VARIANT_LIST	
};

namespace HPATHVM
{
	inline static std::list<HPathVariant*>* ROOT = (std::list<HPathVariant*>*)1;
};

GAMEDRIVER_API String GetObjectName(HPathVariant* item);
GAMEDRIVER_API HPathVariant* ProcessPropertyIntoVariant(FProperty* prop, void const* obj);

class HierarchyPathVM
{
public:

	String GetObjectClass(HPathVariant* item);
	GAMEDRIVER_API static String GetObjectName(HPathVariant* item);
	static bool CompareObjectName(FString name, HPathVariant* item);
	static bool GetVariantAsBool(HPathVariant* item);
	void RemoveTreeItems(std::list<HPathVariant*>* refTree, std::list<HPathVariant*>* currentTree);
	GAMEDRIVER_API static bool Compare(HPathVariant* a, HPathVariant* b);
	GAMEDRIVER_API bool CompareLt(HPathVariant* a, HPathVariant* b);
	GAMEDRIVER_API bool CompareGt(HPathVariant* a, HPathVariant* b);
	GAMEDRIVER_API HierarchyPathVM( String hierarchyPath, UWorld* w, bool singleStep = false);
	GAMEDRIVER_API void Run();
	GAMEDRIVER_API void Step();
	GAMEDRIVER_API void StepOver();
	std::list<HPathVariant*> GetResult() {
		if (result != NULL && result != HPATHVM::ROOT)
			return *result;
		return std::list<HPathVariant*>();
	}
	std::list<HPathVariant*> GetContext() {
		if (context != NULL  && result != HPATHVM::ROOT)
			return *context;
		
		return std::list<HPathVariant*>();
	}
	void UpdateContext();
	GAMEDRIVER_API String GetCurrentOp();
	GAMEDRIVER_API String NodeType();
	GAMEDRIVER_API TArray<FString>  GetStringStack();
	GAMEDRIVER_API int  GetStackSize();
	GAMEDRIVER_API TArray<int> CurrentNodeStartEnd();
	GAMEDRIVER_API void Call(Operation op, HNode* node, std::list<HPathVariant*>* args);
	GAMEDRIVER_API void CallEx(Operation op, HNode* node, std::list<HPathVariant*>* tree);
	std::list<HPathVariant*>* GetFirstStackElemAsIEnumObject();
	GAMEDRIVER_API HPathVariant* GetObjectFieldOrProperty(HPathVariant *object, String fieldName);
	GAMEDRIVER_API bool SetObjectFieldOrProperty(HPathVariant* object, String fieldName, void* v);
	GAMEDRIVER_API bool parseFieldForBrackets(FString fieldName, FString &newstring, FString &index);
	std::list<XPathParserException*>* exceptions;
private:

	HNode* root;
    std::stack<Instruction> code;
	std::stack<std::list<HPathVariant*>*> stack;
	bool bSingleStep = false;
	UWorld* VMWorld = NULL;
	std::list<HPathVariant*>* result = NULL;
	std::list<HPathVariant*>* context = NULL;
	std::unordered_map<String, std::list<std::list<HPathVariant*>*>*> store;
protected:
};

LiteGameObject* ToLiteGameObject(UObject* g, bool includeHPath);
HPathVariant* ListContains(std::list<HPathVariant*>* list, HPathVariant item);
UActorComponent* GetComponent(UObject* Actor, FString componentName);
HPathVariant* GetStructFieldValue(StructHolder* sh, FString fieldName);
HPathVariant* GetObjectFieldValue(UObject* obj, FString fieldName);

HPathVariant* GetPropertyValue(FProperty* prop, UObject* obj, bool& retFlag);


template <typename KeyType, typename ValueType> 
void* processMapPropertyIntoMapPrim(FMapProperty* mapProperty, UObject* obj);
 
template <typename ValueType>
void* processMapPropertyIntoMapPrimStringKey(FMapProperty* mapProperty, UObject* obj);

template <typename KeyType>
void* processMapPropertyIntoMapPrimStringValue(FMapProperty* mapProperty, UObject* obj);
#if PLATFORM_WINDOWS 
template void* processMapPropertyIntoMapPrim<int, int>(FMapProperty* mapProperty, UObject* obj);
template void* processMapPropertyIntoMapPrim<int, bool>(FMapProperty* mapProperty, UObject* obj);
template void* processMapPropertyIntoMapPrim<int, double>(FMapProperty* mapProperty, UObject* obj);
template void* processMapPropertyIntoMapPrim<double, int>(FMapProperty* mapProperty, UObject* obj);
template void* processMapPropertyIntoMapPrim<double, double>(FMapProperty* mapProperty, UObject* obj);
template void* processMapPropertyIntoMapPrim<double, bool>(FMapProperty* mapProperty, UObject* obj);
template void* processMapPropertyIntoMapPrimStringKey<int>(FMapProperty* mapProperty, UObject* obj);
template void* processMapPropertyIntoMapPrimStringKey<double>(FMapProperty* mapProperty, UObject* obj);
template void* processMapPropertyIntoMapPrimStringKey<bool>(FMapProperty* mapProperty, UObject* obj);
template void* processMapPropertyIntoMapPrimStringValue<int>(FMapProperty* mapProperty, UObject* obj);
template void* processMapPropertyIntoMapPrimStringValue<double>(FMapProperty* mapProperty, UObject* obj);
#endif
