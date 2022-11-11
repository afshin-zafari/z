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
#include <vector>
#include "text_ops.hpp"

using namespace std;
class  Line{
private:
    vector<string> _text;
    string _translation;
    int _line_no_in_tree;
    int _indent_no;
public:
    Line(string text, string trans, int line_no, int indent_no):
            _translation(trans),
            _line_no_in_tree(line_no),
            _indent_no(indent_no){
                
    Text::left_trim(text);
    _text = Text::split(text, ' ');            
    }
    int get_line_no(){return _line_no_in_tree;}
    int get_indent_no(){return _indent_no;}
    string get_translation(){return _translation;}
    vector<string>& Text() { return _text;}
    
};
#endif /* line_hpp */
