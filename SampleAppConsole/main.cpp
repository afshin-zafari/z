//
//  main.cpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-09-21.
//

#include <iostream>
#include <map>
#include <string>
#include "unit_tests.hpp"
#include "config.hpp"

int test_map(){
    std::map<int,std::string> map;
    map[0]="afshin";
    return 0;
}
int main(int argc, const char * argv[]) {
    Config::init(argc,argv);
    run_all_tests();
    
    return 0;
}
