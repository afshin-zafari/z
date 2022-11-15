//
//  config.cpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#include "config.hpp"
string Config::default_folder = "";
void Config::init(int argc, const char *argv[])
{
    default_folder = "/Users/afshin/xcode-data";
}
