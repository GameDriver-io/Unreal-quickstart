// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include "Common.h"
#include "XPathParserExceptions.h"
#include <list>
class XPathScanner
{
    String  xpathExpr;
    int     curIndex;

    PATH_CHAR    curChar;

    LexKind kind;
    String  name;
    String  prefix;
    String  stringValue;
    bool    canBeFunction;
    int     lexStart;
    int     prevLexEnd;
    LexKind prevKind;
    XPathAxis axis;

public:
	XPathScanner(String xpathExpr) : XPathScanner(xpathExpr, 0) {}
	XPathScanner(String xpathExpr, int startFrom);
    String   Source() {  return xpathExpr;   } 
    LexKind  Kind() { return kind;        } 
    int      LexStart() { return lexStart;    } 
    int      LexSize() { return curIndex - lexStart; } 
    int      PrevLexEnd() {return prevLexEnd;  } 
    String Name();
    String Prefix();
    String RawValue();
    String StringValue();
    bool CanBeFunction();
    XPathAxis Axis();
    void NextLex();
    void PassToken(LexKind t);
    void CheckToken(LexKind t);
    //errors.
    void UnexpectedTokenException(String token);
    void NodeTestExpectedException(String token);
    void PredicateAfterDotException();
    void PredicateAfterDotDotException();
    void ScientificNotationException();
    void UnclosedStringException();
    void EofExpectedException(String token);
    void TokenExpectedException(String expectedToken, String actualToken);
    std::list<XPathParserException*>* exceptions;
private:

    void SetSourceIndex(int index);
    void NextChar();
    void SkipSpace();
    static bool IsAsciiDigit(PATH_CHAR ch) { return (unsigned int)(ch - '0') <= 9; }
    static bool IsWhiteSpace(PATH_CHAR ch) { return ch <= ' ' && (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r'); }
    bool CheckOperator(bool star);
    XPathAxis CheckAxis();
    void ScanNumber();
    void ScanString();
    String ScanNCName();
    String LexKindToString(LexKind t);
protected:
};

