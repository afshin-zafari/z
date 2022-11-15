//
//  forest.cpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#include "forest.hpp"

void Forest::search(string word){
    for(auto t: trees){
        t->search(word);
    }
}

string Forest::get_path_to_found(){
    string result ="";
    for(auto t: trees){
        result += t->get_path_to_found();        
    }
    return result;
}
void Forest::dump(){
    for(auto t: trees){
        printf("-----------------------------------\n");
        t->dump();
    }
    printf("-----------------------------------\n");
}
string Forest::get_translation_for_found_items(){
    string result;
    for(auto tree: trees){
        result += tree->get_translation_for_found_items();
    }
    return result;
}
