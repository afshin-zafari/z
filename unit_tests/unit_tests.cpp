//
//  unit_tests.cpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#include "unit_tests.hpp"
#include "file_ops.hpp"
int test_read_file(){
    FileManager fm;
    Tree t;
    fm.read_file_to_tree(t,"/Users/afshin/src/sample_app_xcode/SampleAppConsole/unit_tests/unit_tests.cpp");
    
    return 0;
}
int run_all_tests(){
    test_read_file();
    return 0;
}
