#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <codecvt>


#ifndef UNICODE  
typedef std::string String;
#define __TEXT(quote) quote
#define TO_STRING std::to_string
#define PATH_CHAR char
#elif PLATFORM_ANDROID || PLATFORM_IOS || PLATFORM_MAC || PLATFORM_SWITCH
typedef std::u16string String;
#define __TEXT(quote) u##quote
#define TO_STRING std::to_u16string
#define PATH_CHAR char16_t
#else
typedef std::wstring String;
#define PATH_CHAR wchar_t
#define __TEXT(quote) L##quote
#define TO_STRING std::to_wstring
#endif


#ifndef COMMON_H
#define COMMON_H
enum class XPathAxis {
    Unknown = 0,
    Ancestor,
    AncestorOrSelf,
    Attribute,
    Child,
    Descendant,
    DescendantOrSelf,
    Following,
    FollowingSibling,
    Namespace,
    Parent,
    Preceding,
    PrecedingSibling,
    Self,
    Root
};


enum class XPathNodeType
{
    //
    // Summary:
    //     The root node of the XML document or node tree.
    Root = 0,
    //
    // Summary:
    //     An element, such as <element>.
    Element = 1,
    //
    // Summary:
    //     An attribute, such as id='123'.
    Attribute = 2,
    //
    // Summary:
    //     A namespace, such as xmlns="namespace".
    Namespace = 3,
    //
    // Summary:
    //     The text content of a node. Equivalent to the Document Object Model (DOM) Text
    //     and CDATA node types. Contains at least one character.
    Text = 4,
    //
    // Summary:
    //     A node with white space characters and xml:space set to preserve.
    SignificantWhitespace = 5,
    //
    // Summary:
    //     A node with only white space characters and no significant white space. White
    //     space characters are #x20, #x9, #xD, or #xA.
    Whitespace = 6,
    //
    // Summary:
    //     A processing instruction, such as <?pi test?>. This does not include XML declarations,
    //     which are not visible to the System.Xml.XPath.XPathNavigator class.
    ProcessingInstruction = 7,
    //
    // Summary:
    //     A comment, such as <!-- my comment -->
    Comment = 8,
    //
    // Summary:
    //     Any of the System.Xml.XPath.XPathNodeType node types.
    All = 9
};

enum class XPathOperator {
    Unknown = 0,
    Or,
    And,
    Eq,
    Ne,
    Lt,
    Le,
    Gt,
    Ge,
    Plus,
    Minus,
    Multiply,
    Divide,
    Modulo,
    UnaryMinus,
    Union
};
static String XPathAxis_ToString(XPathAxis op) {
    switch (op) {
    case XPathAxis::Root: return TEXT("Root");
    case XPathAxis::Ancestor: return TEXT("Ancestor");
    case XPathAxis::AncestorOrSelf:  return TEXT("AncestorOrSelf");
    case XPathAxis::Attribute:  return TEXT("Attribute");
    case XPathAxis::Child:  return TEXT("Child");
    case XPathAxis::Descendant:  return TEXT("Descendant");
    case XPathAxis::DescendantOrSelf:  return TEXT("DescendantOrSelf");
    case XPathAxis::Following:  return TEXT("Following");
    case XPathAxis::FollowingSibling:  return TEXT("FollowingSibling");
    case XPathAxis::Namespace:  return TEXT("Namespace");
    case XPathAxis::Parent:  return TEXT("Parent");
    case XPathAxis::Preceding:  return TEXT("Preceding");
    case XPathAxis::PrecedingSibling:  return TEXT("PrecedingSibling");
    case XPathAxis::Self:  return TEXT("Self");
    case XPathAxis::Unknown:  return TEXT("Unknown");
    default:
        //throw std::exception("Invalid XPathOperator");
        return TEXT("ERROR:Invalid XPathOperator");
    }
}

enum class FUNCTIONTYPE {
    CONTAINS=0,
    COMPONENT=1,
    COMPONENTS=2,
    COUNT=3,
    DATETIME=4,
    DOUBLE=5,
    ELEMENTAT=6,
    FFALSE=7,
    FIRST=8,
    FLOAT=9,
    FOREACH=10,
    LAST=11,
    MATCH=12,
    SUM=13,
    TTRUE=14,
    TYPE=15,
    UNKNOWN=16
};
static FUNCTIONTYPE IntForFunction(String s) {
    if (s.compare(TEXT("contains"))==0) {
        return FUNCTIONTYPE::CONTAINS;
    }
    if (s.compare(TEXT("component")) == 0) {
        return FUNCTIONTYPE::COMPONENT;
    }
    if (s.compare(TEXT("components")) == 0) {
        return FUNCTIONTYPE::COMPONENTS;
    }
    if (s.compare(TEXT("count")) == 0) {
        return FUNCTIONTYPE::COUNT;
    }
    if (s.compare(TEXT("datetime")) == 0) {
        return FUNCTIONTYPE::DATETIME;
    }
    if (s.compare(TEXT("double")) == 0) {
        return  FUNCTIONTYPE::DOUBLE;
    }
    if (s.compare(TEXT("elementat")) == 0) {
        return FUNCTIONTYPE::ELEMENTAT;
    }
    if (s.compare(TEXT("false")) == 0) {
        return FUNCTIONTYPE::FFALSE;
    }
    if (s.compare(TEXT("first")) == 0) {
        return FUNCTIONTYPE::FIRST;
    }
    if (s.compare(TEXT("float")) == 0) {
        return FUNCTIONTYPE::FLOAT;
    }
    if (s.compare(TEXT("foreach")) == 0) {
        return FUNCTIONTYPE::FOREACH;
    }
    if (s.compare(TEXT("last")) == 0) {
        return FUNCTIONTYPE::LAST;
    }
    if (s.compare(TEXT("match")) == 0) {
        return FUNCTIONTYPE::MATCH;
    }
    if (s.compare(TEXT("sum")) == 0) {
        return FUNCTIONTYPE::SUM;
    }
    if (s.compare(TEXT("true")) == 0) {
        return FUNCTIONTYPE::TTRUE;
    }
    if (s.compare(TEXT("type")) == 0) {
        return FUNCTIONTYPE::TYPE;
    }
    return FUNCTIONTYPE::UNKNOWN;
}
static String XPathOperator_ToString(XPathOperator op)
{
    switch (op)
    {
        case XPathOperator::Unknown:
            return TEXT("Unknown");
        case XPathOperator::Or:
            return TEXT("Or");
        case XPathOperator::And:
            return TEXT("And");
        case XPathOperator::Eq:
            return TEXT("Eq");
        case XPathOperator::Ne:
            return TEXT("Ne");
        case XPathOperator::Lt:
            return TEXT("Lt");
        case XPathOperator::Le:
            return TEXT("Le");
        case XPathOperator::Gt:
            return TEXT("Gt");
        case XPathOperator::Ge:
            return TEXT("Ge");
        case XPathOperator::Plus:
            return TEXT("Plus");
        case XPathOperator::Multiply:
            return TEXT("Multiply");
        case XPathOperator::Divide:
            return TEXT("Divide");
        case XPathOperator::Modulo:
            return TEXT("Modulo");
        case XPathOperator::UnaryMinus:
            return TEXT("UnaryMinus");
        case XPathOperator::Union:
            return TEXT("Union");
        default:
            return TEXT("ERROR:Invalid XPathOperator");
            //throw std::exception("Invalid XPathOperator");
    }
};

enum class LexKind {
    Unknown,        // Unknown lexeme
    Or,             // Operator 'or'
    And,            // Operator 'and'
    Eq,             // Operator '='
    Ne,             // Operator '!='
    Lt,             // Operator '<'
    Le,             // Operator '<='
    Gt,             // Operator '>'
    Ge,             // Operator '>='
    Plus,           // Operator '+'
    Minus,          // Operator '-'
    Multiply,       // Operator '*'
    Divide,         // Operator 'div'
    Modulo,         // Operator 'mod'
    UnaryMinus,     // Not used
    Union,          // Operator '|'
    LastOperator = Union,

    DotDot,         // '..'
    ColonColon,     // '::'
    SlashSlash,     // Operator '//'
    Number,         // Number (numeric literal)
    Axis,           // AxisName

    Name,           // NameTest, NodeType, FunctionName, AxisName, second part of VariableReference
    String,         // Literal (string literal)
    Eof,            // End of the expression

    FirstStringable = Name,
    LastNonChar = Eof,

    LParens = '(',
    RParens = ')',
    LBracket = '[',
    RBracket = ']',
    Dot = '.',
    At = '@',
    Comma = ',',

    Star = '*',      // NameTest
    Slash = '/',      // Operator '/'
    Dollar = '$',      // First part of VariableReference
    RBrace = '}',      // Used for AVTs
};

static int XPathOperatorPrecedence[] = {
    /*Unknown    */ 0,
    /*Or         */ 1,
    /*And        */ 2,
    /*Eq         */ 3,
    /*Ne         */ 3,
    /*Lt         */ 4,
    /*Le         */ 4,
    /*Gt         */ 4,
    /*Ge         */ 4,
    /*Plus       */ 5,
    /*Minus      */ 5,
    /*Multiply   */ 6,
    /*Divide     */ 6,
    /*Modulo     */ 6,
    /*UnaryMinus */ 7,
    /*Union      */ 8,  // Not used
};

enum class HNodeType
{
    Object,
    Number,
    String,
    Variable,
    Function,
    Predicate,
    Operator,
    Step,
    Axis,
    UNASSIGNED
};

static String HNodeType_ToString(HNodeType nodeType)
{
    switch (nodeType)
    {
        case HNodeType::Object:
            return String(TEXT("Object"));
        case HNodeType::Number:
            return String(TEXT("Number"));
        case HNodeType::String:
            return String(TEXT("String"));
        case HNodeType::Variable:
            return String(TEXT("Variable"));
        case HNodeType::Function:
            return String(TEXT("Function"));
        case HNodeType::Predicate:
            return String(TEXT("Predicate"));
        case HNodeType::Operator:
            return String(TEXT("Operator"));
        case HNodeType::Step:
            return String(TEXT("Step"));
        case HNodeType::Axis:
            return String(TEXT("Axis"));
        case HNodeType::UNASSIGNED:
            return String(TEXT("UNASSIGNED"));
        default:
            return TEXT("ERROR:Unknown HNodeType");
            //throw std::exception("Unknown HNodeType");
    }
};

static String Create_ID_String(int i)
{
    std::ostringstream ss;
    ss << "" << std::setfill('0') << std::setw(6) << std::hex << i;
#ifndef UNICODE  
    String result = ss.str();
#elif PLATFORM_ANDROID || PLATFORM_IOS || PLATFORM_MAC || PLATFORM_SWITCH
    std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> conv;
    String result = conv.from_bytes(ss.str());
#else    
    std::string s1 = ss.str();
    std::wstring result = String(s1.begin(), s1.end());
#endif

    return result;
}

static String HNodePtr_ToString(void* ptr)
{
    std::ostringstream ss;
    ss << "0x" << std::setfill('0') << std::setw(8) << std::hex << ptr;
#ifndef UNICODE  
    String result = ss.str();
#elif PLATFORM_ANDROID || PLATFORM_IOS || PLATFORM_MAC || PLATFORM_SWITCH
    std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> conv;
    String result = conv.from_bytes(ss.str());
#else    
    std::string s1 = ss.str();
    std::wstring result = String(s1.begin(), s1.end());
#endif
    
    return result;
}
#endif
