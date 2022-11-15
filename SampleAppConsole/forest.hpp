//
//  forest.hpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#ifndef forest_hpp
#define forest_hpp

#include <stdio.h>
#include <vector>
#include "tree.hpp"

using namespace std;

class Forest{
public:
    vector<Tree*> trees;
    ~Forest(){
        for(auto t: trees)
            delete t;
    }
    void search(string word);
    string get_path_to_found();
    string get_translation_for_found_items();
    void dump();
};
#endif /* forest_hpp */
