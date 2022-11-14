//
//  console_ops.cpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#include "console_ops.hpp"
const string Console::ESC_COLOR="\033[";
const string Console::ESC_END="\033[0m";
const string Console::BLINK_ON="\033[5m";
const string Console::BLINK_OFF="\033[25m";

string Console::blinking(string input){
    return Console::BLINK_ON  + input + BLINK_OFF + ESC_END;
}
string Console::color(string input, Colors fg, Colors bg){
    return ESC_COLOR + to_string(bg+10) + ";" + to_string(fg) + "m" + input + ESC_END;
}
string Console::negative(string text){
    return color(text, black, white);
}
