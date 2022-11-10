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

#include "tree.hpp"

using namespace std;
class FileManager{
public:
    int read_file_to_tree(Tree &tree, string filename);
    
    
    
};


#endif /* file_ops_hpp */
