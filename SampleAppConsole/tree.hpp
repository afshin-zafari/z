//
//  tree.hpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#ifndef tree_hpp
#define tree_hpp


#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include "line.hpp"
#include "text_ops.hpp"

using namespace std;

struct Found{
    string word;
    int start_pos, end_pos;
};


struct Result{
    int line_no;
    string search_text;
    vector<Found> found;
};

class Tree{
private:
    vector<Line> _lines;
    vector<Result> _results;
    int tree_no_in_forest;
    
public:
    void add_line(string line);
    unsigned long get_line_count();
    void search( string word);
    string get_path_to_found();
    string get_original_line(int line_no);
    
};
#endif /* tree_hpp */
