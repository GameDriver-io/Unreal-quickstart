// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include <string>
#include <time.h>
#include "../../UnrealHierarchyPath/include/HierarchyPath/HierarchyPathVM.h"

class WaitForObjectDesc
{
public:
    std::string HierarchyPath;
    std::string ClientId;
    std::string RequestId;
    timespec Timeout;
};

class ObjectValueRequest
{
public:
	//HPathVariant* Obj = NULL;
	HPathVariant* Value = NULL;
	std::string HierarchyPath;
	std::string ClientId;
	std::string RequestId;
	timespec Timeout;
	std::string  FieldName = "";
	
	std::string ValueType = "";

	bool IsScreenshot = false;
	bool IsLocalScreenshot = false;
	ProtocolMessage OriginalMessage;
	std::string Filename = "";
};

class MovToAgent {
public:
	ProtocolMessage msg;
	bool firstFrame = true;
	UObject* agent = NULL;
	FVector destination;
};