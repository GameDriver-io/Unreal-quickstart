// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include "Common.h"
#include "HNode.h"
#include "XPathParserExceptions.h"

class HierarchyPathParser
{
public:
	GAMEDRIVER_API static HNode* Parse(String query,std::list<XPathParserException*>* exceptions);
private:

};

