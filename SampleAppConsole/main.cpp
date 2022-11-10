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

int test_map(){
    std::map<int,std::string> map;
    map[0]="afshin";
    return 0;
}
int main(int argc, const char * argv[]) {
    
    run_all_tests();
    
    // insert code here...
    printf("\x1B[31mTexting");
    std::cout << "Hello, World!\n";
    printf("\033[0m\t\t");
    printf("\033[3;42;30mTexting\033[0m\t\t");
    
    printf("\n");
    printf("\x1B[31mTexting\033[0m\t\t");
    printf("\x1B[32mTexting\033[0m\t\t");
    printf("\x1B[33mTexting\033[0m\t\t");
    printf("\x1B[34mTexting\033[0m\t\t");
    printf("\x1B[35mTexting\033[0m\n");
    
    printf("\x1B[36mTexting\033[0m\t\t");
    printf("\x1B[36mTexting\033[0m\t\t");
    printf("\x1B[36mTexting\033[0m\t\t");
    printf("\x1B[37mTexting\033[0m\t\t");
    printf("\x1B[93mTexting\033[0m\n");
    
    printf("\033[3;42;30mTexting\033[0m\t\t");
    printf("\033[3;43;30mTexting\033[0m\t\t");
    printf("\033[3;44;30mTexting\033[0m\t\t");
    printf("\033[3;104;30mTexting\033[0m\t\t");
    printf("\033[3;100;30mTexting\033[0m\n");
    
    printf("\033[3;47;35mTexting\033[0m\t\t");
    printf("\033[2;47;35mTexting\033[0m\t\t");
    printf("\033[1;47;35mTexting\033[0m\t\t");
    printf("\t\t");
    printf("\n");
    test_map();
    return 0;
}
