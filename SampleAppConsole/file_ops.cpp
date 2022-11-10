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
    string line;
    while(getline(file, line)){
        tree.add_line(line);
    }
    file.close();
    return 0;
}
