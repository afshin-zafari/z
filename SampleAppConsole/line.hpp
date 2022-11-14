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
    int _parent_line_no;
    bool _is_synonym;
public:
    Line(string text, string trans, int line_no, int indent_no):_translation(trans),_line_no_in_tree(line_no),_indent_no(indent_no){
        Text::left_trim(text);
        _text = Text::split(text, ' ');
        _parent_line_no=0;
        _is_synonym = false;
    }
    int get_line_no(){return _line_no_in_tree;}
    int get_indent_no(){return _indent_no;}
    string get_translation(){return _translation;}
    vector<string>& Text() { return _text;}
    void set_synonym(bool flag) { _is_synonym = flag;}
    bool is_synonum(){ return _is_synonym;}
    int get_parent_line_no(){return _parent_line_no;}
    void set_parent_line_no(int line_no) { _parent_line_no = line_no;}
    
    void remove_synonym_marks();
    void dump();
    
};
#endif /* line_hpp */
