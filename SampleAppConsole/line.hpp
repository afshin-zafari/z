//
//  line.hpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#ifndef line_hpp
#define line_hpp

#include <stdio.h>
#include <string>
using namespace std;
class  Line{
private:
    string _text, _translation;
    int _line_no_in_tree;
    int _indent_no;
public:
    Line(string text):_text(text){}
    
};
#endif /* line_hpp */
