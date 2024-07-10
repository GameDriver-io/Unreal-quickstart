// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include "Common.h"
#include <algorithm>
#include <iostream>
#include <list>

template <typename Node>
class IXPathBuilder
{
public:
    virtual void StartBuild();
    virtual Node* EndBuild(Node* result);
    virtual Node* StringNode(String value);
    virtual Node* NumberNode(String value);
    virtual Node* Operator(XPathOperator op, Node* left, Node* right);
    virtual Node* Axis(XPathAxis xpathAxis, XPathNodeType nodeType, String prefix, String name);
    virtual Node* JoinStep(Node* left, Node* right);
    virtual Node* Predicate(Node* node, Node* condition, bool reverseStep);
    virtual Node* Variable(String prefix, String name);
    virtual Node* Function(String prefix, String name, std::list<Node*> args);
};

template<typename Node>
inline void IXPathBuilder<Node>::StartBuild()
{
}

template<typename Node>
inline Node* IXPathBuilder<Node>::EndBuild(Node* result)
{
    return new Node();
}

template<typename Node>
inline Node* IXPathBuilder<Node>::StringNode(String value)
{
    return new Node();
}

template<typename Node>
inline Node* IXPathBuilder<Node>::NumberNode(String value)
{
    return new Node();
}

template<typename Node>
inline Node* IXPathBuilder<Node>::Operator(XPathOperator op, Node* left, Node* right)
{
    return new Node();
}

template<typename Node>
inline Node* IXPathBuilder<Node>::Axis(XPathAxis xpathAxis, XPathNodeType nodeType, String prefix, String name)
{
    return new Node();
}

template<typename Node>
inline Node* IXPathBuilder<Node>::JoinStep(Node* left, Node* right)
{
    return new Node();
}

template<typename Node>
inline Node* IXPathBuilder<Node>::Predicate(Node* node, Node* condition, bool reverseStep)
{
    return new Node();
}

template<typename Node>
inline Node* IXPathBuilder<Node>::Variable(String prefix, String name)
{
    return new Node();
}

template<typename Node>
inline Node* IXPathBuilder<Node>::Function(String prefix, String name, std::list<Node*> args)
{
    return new Node();
}
