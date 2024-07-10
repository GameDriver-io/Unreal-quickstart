// Copyright GameDriver, Inc. All Rights Reserved.
#pragma once
#include "Common.h"
#include "Containers/UnrealString.h"
/*
// trim from start (in place)
static inline void ltrim(std::wstring& s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !std::isspace(ch);
        }));
}

// trim from end (in place)
static inline void rtrim(std::wstring& s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !std::isspace(ch);
        }).base(), s.end());
}

// trim from both ends (in place)
static inline void trim(std::wstring& s) {
    rtrim(s);
    ltrim(s);
}

// trim from start (copying)
static inline std::wstring ltrim_copy(std::wstring s) {
    ltrim(s);
    return s;
}

// trim from end (copying)
static inline std::wstring rtrim_copy(std::wstring s) {
    rtrim(s);
    return s;
}

// trim from both ends (copying)
static inline std::wstring trim_copy(std::wstring s) {
    trim(s);
    return s;
}
*/
class XPathParserException {
public:
    String queryString;
    int    startChar;
    int    endChar;
    String message;
    bool msgOnly;
    XPathParserException(String query, int start, int end, String mess);
    XPathParserException(String mess);
private:
    enum TrimType {
        Left,
        Right,
        Middle,
    };

    // This function is used to prevent long quotations in error messages
    static void AppendTrimmed(String sb, String value, int startIndex, int count, TrimType trimType);

public:
    String MarkOutError();


private:
    FString FormatDetailedMessage();

public:
    FString ToString();
};
