//
//  config.hpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#ifndef config_hpp
#define config_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Config{
public:
    static string default_folder;
    static void init(int argc, const char *argv[]);
};
#endif /* config_hpp */
