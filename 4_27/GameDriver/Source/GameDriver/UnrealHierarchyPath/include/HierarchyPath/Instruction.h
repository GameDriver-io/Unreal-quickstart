// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include "HNode.h"
#include "Operation.h"

class Instruction
{
public:
    Operation Op = Operation::Exit;
    HNode* Node = NULL;
    Instruction(Operation o, HNode* n)
    {
        Op = o;
        Node = n;
    };
};