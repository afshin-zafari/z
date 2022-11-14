//
//  text_ops.hpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#ifndef text_ops_hpp
#define text_ops_hpp

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

class Text{
public:
    static vector<string> split(string str, char sep);
    static int left_ws_count(string str);
    static void left_trim(string &text);
};
void test();
#endif /* text_ops_hpp */
