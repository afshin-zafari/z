//
//  tree.cpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#include "tree.hpp"

void Tree::add_line(string line){
    auto sections = Text::split(line, ':');
    string trans = sections.size() >0? sections[1] : "";
    _lines.push_back(Line(sections[0],trans));
}
unsigned long  Tree::get_line_count(){
    return _lines.size();
}
