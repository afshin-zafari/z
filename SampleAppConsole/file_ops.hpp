//
//  file_ops.hpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#ifndef file_ops_hpp
#define file_ops_hpp

#include <stdio.h>
#include <fstream>
#include <string>
#include <filesystem>

#include "tree.hpp"
#include "forest.hpp"
#include "text_ops.hpp"

using namespace std;
class FileManager{
public:
    int read_file_to_tree(Tree &tree, string filename);
    int read_file_to_forest(Forest &f, string filename);
    int read_folder_to_forest(Forest &f, string folder_name);
    
    
};


#endif /* file_ops_hpp */
