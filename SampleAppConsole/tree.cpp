//
//  tree.cpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#include "tree.hpp"
#include "console_ops.hpp"

void Tree::add_line(string line){
    auto    sections    = Text::split(line, ':');
    string  trans       = sections.size() > 0 ? sections[1] : "";
    int     line_no     = (int)_lines.size();
    int     indent_no   = Text::left_ws_count(line);
    
    Line newLine(sections[0], trans, line_no, indent_no);
    _lines.push_back(newLine);
}


unsigned long  Tree::get_line_count(){
    return _lines.size();
}

void Tree::search(string word){
    for( auto &line : _lines){
        for(auto &w: line.Text()){
            if (w == word){
                Result r;
                r.line_no = line.get_line_no();
                r.search_text = w;
                w = '*' + w + '*';//Console::blinking(w);
                _results.push_back(r);
            }
        }
    }
}
string Tree::get_path_to_found(){
    string result;
    if (_results.size() == 0)
        return result;
    auto  last_line_ptr = max_element(_results.begin(), _results.end(), [](Result &a, Result &b){return a.line_no< b.line_no;});
    if (last_line_ptr == _results.end())
        return result;
    for(int i = last_line_ptr->line_no; i >=0; i--){
        result = get_original_line(i) + result ;
        if (_lines[i].get_indent_no() == 0) \
            break;
    }
    return result;
}
string Tree::get_original_line(int line_no){
    string result;
    string indent(_lines[line_no].get_indent_no(), ' ');
    result += indent;
    for( auto w: _lines[line_no].Text() )
        result +=  " " + w;
    if (_lines[line_no].get_translation() != "")
        result += ':';
    result += _lines[line_no].get_translation() + "\n";
    return result;
}
