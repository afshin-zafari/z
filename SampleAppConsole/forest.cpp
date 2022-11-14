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
