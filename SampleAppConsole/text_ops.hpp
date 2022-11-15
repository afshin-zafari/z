//
//  text_ops.hpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#ifndef text_ops_hpp
#define text_ops_hpp

#include <algorithm>
#include <cctype>
#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

class Text{
public:
    static vector<string> split(string str, char sep);
    static int left_ws_count(string str);
    static void left_trim(string &text);
    static bool contains(string text, char c);
    static string to_lower(string text);
};
void test();
#endif /* text_ops_hpp */
