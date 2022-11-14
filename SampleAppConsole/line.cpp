//
//  line.cpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#include "line.hpp"
#include <algorithm>

string ReplaceAll(string str, const string& from, const string& to) {
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // Handles case where 'to' is a substring of 'from'
    }
    return str;
}
void Line::remove_synonym_marks(){
    for(auto& word: _text){
        word = ReplaceAll(word, "[","");
        word = ReplaceAll(word, "]","");
    }
}
void Line::dump(){
    printf("%d, %d, %d, %d ", _line_no_in_tree, _indent_no, (int)_is_synonym, _parent_line_no);
    for(auto word: _text){
        printf("%s ",word.c_str());
    }
    printf("\n");
}
