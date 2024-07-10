// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include "Common.h"

enum class Operation
{
    Exit,
    EvaluateNode,
    EvaluateOperator,
    EvaluateLeftOp,
    EvaluateRightOp,
    EvaluatePredicateContext,
    EvaluatePredicateCondition,
    ProcessFunction,
    EvaluateFunctionContext,
    EvaluateFunctionCondition,
    RetrieveResult,
    StoreResult,
    Break
};

static String Operation_ToString(Operation op)
{
    switch (op)
    {
    case Operation::Exit:
        return __TEXT("Exit");
    case Operation::EvaluateNode:
        return __TEXT("EvaluateNode");
    case      Operation::EvaluateOperator:
        return __TEXT("EvaluateOperator");
    case          Operation::EvaluateLeftOp:
        return __TEXT("EvaluateLeftOp");
    case         Operation::EvaluateRightOp:
        return __TEXT("EvaluateRightOp");
    case     Operation::EvaluatePredicateContext:
        return __TEXT("EvaluatePredicateContext");
    case        Operation::EvaluatePredicateCondition:
        return __TEXT("EvaluatePredicateCondition");
    case       Operation::ProcessFunction:
        return __TEXT("ProcessFunction");
    case        Operation::EvaluateFunctionContext:
        return __TEXT("EvaluateFunctionContext");
    case        Operation::EvaluateFunctionCondition:
        return __TEXT("EvaluateFunctionCondition");
    case        Operation::RetrieveResult:
        return __TEXT("RetrieveResult");
    case        Operation::StoreResult:
        return __TEXT("StoreResult");
    case         Operation::Break:
        return __TEXT("Break");
    default:
        return __TEXT("Invalid Operator");
    }
};
