// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include "Common.h"
#include "IXPathBuilder.h"
#include "HNode.h"
#include "XPathScanner.h"
#include <stack>

template <typename Node> class XPathParser
{
public:
	XPathParser();
	~XPathParser();
	Node* Parse(String xpathExpr, IXPathBuilder<Node> * builder);
	std::list<XPathParserException*>* exceptions;
private:
	Node* ParseExpr();
	Node* ParseSubExpr(int callerPrec);
	Node* ParseUnionExpr();
	Node* ParsePathExpr();
	Node* ParseFilterExpr();
	Node* ParseRelativeLocationPath();
	Node* ParseLocationPath();
	Node* ParsePrimaryExpr();
	Node* ParsePredicate();
	Node* ParseFunctionCall();
	Node* ParseStep();
	Node* ParseNodeTest(XPathAxis axis);
	static void InternalParseNodeTest(XPathScanner* scanner, XPathAxis axis, XPathNodeType* nodeType, String* nodePrefix, String* nodeName);
	static XPathNodeType PrincipalNodeType(XPathAxis axis);
	static bool IsReverseAxis(XPathAxis axis);
	static bool IsNodeType(XPathScanner* scanner);	
	static bool IsStep(LexKind lexKind);
	bool IsPrimaryExpr();	
	void PushPosInfo(int startChar, int endChar);
	void PopPosInfo(int *startChar, int *endChar);
	void PopPosInfo();
	XPathScanner * scanner;
	IXPathBuilder<Node> * builder;
	std::stack<int> posInfo;
};
