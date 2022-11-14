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
    string  trans       = sections.size() > 1 ? sections[1] : " ";
    int     line_no     = (int)_lines.size();
    int     indent_no   = Text::left_ws_count(line);
    if (line.size() == 0)
        return;
    Line newLine(sections[0], trans, line_no, indent_no);
    static int last_parent = 0;
    if (indent_no == 0 )
        last_parent = 0;
    if (Text::contains(line, '[')){
        newLine.set_synonym(true);
        newLine.set_parent_line_no(last_parent);
        newLine.remove_synonym_marks();
    }
    else{
        last_parent = line_no;
    }
                        
    _lines.push_back(newLine);
}

unsigned long  Tree::get_line_count(){
    return _lines.size();
}
void Tree::mark_as_found(int line_no, string word){
    for (auto &w: _lines[line_no].Text()){
        if (w == word){
            w = '*' + w + '*';
        }
    }
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
                if(line.is_synonum()){
                    int p = line.get_parent_line_no();
                    mark_as_found(p, line.Text()[0] );
                    mark_as_found(r.line_no, line.Text()[0] );
                    r.line_no = p;
                    _results.push_back(r);
                }
            }
        }
    }
}
int Tree::get_parent_line(int line_no){
    int indent_no = _lines[line_no].get_indent_no();
    for (int i = line_no-1; i >= 0; i--){
        if (_lines[i].get_indent_no() < indent_no){
            return i;
        }
    }
    return -1;
}

string Tree::get_path_to_found(){
    string result;
    if (_results.size() == 0)
        return result;
    auto  last_line_ptr = max_element(_results.begin(), _results.end(), [](Result &a, Result &b){return a.line_no< b.line_no;});
    if (last_line_ptr == _results.end())
        return result;
    result = "\n";
    int line_no = last_line_ptr->line_no;
    while (line_no>=0){
        result = get_original_line(line_no) + result ;
        line_no = get_parent_line(line_no);
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
void Tree::dump(){
    for(auto line: _lines){
        line.dump();
    }
}
