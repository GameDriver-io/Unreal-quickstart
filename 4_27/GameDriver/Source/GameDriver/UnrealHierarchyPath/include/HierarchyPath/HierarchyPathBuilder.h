// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include "IXPathBuilder.h"
//#if ENGINE_MAJOR_VERSION >=5
#include "HNode.h"
//#endif
template <typename Node>
class HierarchyPathBuilder :
    public IXPathBuilder<Node>
{
    public:
        HierarchyPathBuilder<Node>();
        void StartBuild();        
        Node* EndBuild(Node* result);
        Node* StringNode(String value);
        Node* NumberNode(String value);
        Node* Operator(XPathOperator op, Node* left, Node* right);
        Node* Axis(XPathAxis xpathAxis, XPathNodeType nodeType, String prefix, String name);
        Node* JoinStep(Node* left, Node* right);
        Node* Predicate(Node* node, Node* condition, bool reverseStep);
        Node* Variable(String prefix, String name);
        Node* Function(String prefix, String name, std::list<Node*> args);
};




