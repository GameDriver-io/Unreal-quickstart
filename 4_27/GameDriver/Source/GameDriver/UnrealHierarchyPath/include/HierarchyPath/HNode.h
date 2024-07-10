// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include "Common.h"
#include <list>
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

class HNode
{   
public:
    HNode() { Id = Create_ID_String(ID_Index++); Allocation(); }
    ~HNode();
    HNode(String _Name, HNodeType _Type, String _Value = __TEXT("")) { Name = _Name; _nodeType = _Type; _value = _Value; Id = Create_ID_String(ID_Index++); Allocation(); }
    HNode(String _Name, HNodeType _Type, XPathNodeType _XPathNodeType, String _Value = __TEXT("")) { Name = _Name; _nodeType = _Type; _value = _Value; _xPathNodeType = _XPathNodeType; Id = Create_ID_String(ID_Index++); Allocation();}
    HNode(HNode* _LeftStep, HNode* _RightStep) { _leftStep = _LeftStep; _rightStep = _RightStep; _nodeType = HNodeType::Step;  Id = Create_ID_String(ID_Index++); Allocation(); }
	void SetNodeLength(int start, int end) { Start = start; End = end; }
    String Id;
    String Name = __TEXT("");
    HNodeType _nodeType = HNodeType::UNASSIGNED;
    XPathNodeType _xPathNodeType = XPathNodeType::Whitespace;
    XPathAxis _xPathAxis = XPathAxis::Unknown;
    XPathAxis _currentTreexPathAxis = XPathAxis::Unknown;
    XPathAxis _previousTreexPathAxis = XPathAxis::Unknown;
    XPathOperator _xPathOperator = XPathOperator::Unknown;
    String _value = __TEXT("");
    String _prefix = __TEXT("");
    HNode* _leftStep = NULL;
    HNode* _rightStep = NULL;
    HNode* _opLeft = NULL;
    HNode* _opRight = NULL;
    HNode* _predicateCondition = NULL;
    HNode* _predicateNode = NULL;
    bool _predicateReverseStep = false;
    std::list<HNode*> * _args = NULL;    
    //Random Rnd = null;
    int Start = -1;
    int End = -1;
    inline static int ID_Index;
    bool Expanded = false;
    bool NeedsExpanding = false;
    bool IsRoot = false;
    String ToStringEx() { return __TEXT("HNode ID = ") + Id + __TEXT(" (") + HNodePtr_ToString(this) + __TEXT(")"); };
    String ToString() { return __TEXT("ID=") + Id + __TEXT(" TYPE=") + HNodeType_ToString(this->_nodeType); };
    String NodeType(){ return HNodeType_ToString(this->_nodeType); }
    static void Reset() { ID_Index = 1; }
private:
    void Allocation();
    void Deallocation();
};

