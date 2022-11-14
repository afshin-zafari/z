//
//  file_ops.cpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#include "file_ops.hpp"

int FileManager::read_file_to_tree(Tree &tree, string filename){
    ifstream file;
    file.open(filename, ios_base::in);
    if (!file.is_open()){
        return -1;
    }
    tree.set_filename(filename);
    string line;
    while(getline(file, line)){
        tree.add_line(line);
    }
    file.close();
    return 0;
}
int FileManager::read_file_to_forest(Forest &forest, string filename){
    ifstream file;
    file.open(filename, ios_base::in);
    if (!file.is_open()){
        return -1;
    }
    string line;
    Tree *tree = nullptr;
    int line_no =0 ;
    while(getline(file, line)){
        if (line.size() == 0 )
            continue;
        int indent = Text::left_ws_count(line);
        if (indent ==  0){
            tree = new Tree();
            forest.trees.push_back(tree);
            tree->set_filename(filename);
            tree->set_start_line(line_no);
        }
        if (tree != nullptr)
            tree->add_line(line);
        line_no++;
    }
    file.close();
    return 0;
}
