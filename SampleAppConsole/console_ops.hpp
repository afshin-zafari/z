//
//  console_ops.hpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#ifndef console_ops_hpp
#define console_ops_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Console{
public:
    static enum Colors{
        black = 30,
        red=31,
        green=32,
        yellow=33,
        blue=34,
        magenta=35,
        cyan=36,
        white=37,
        bright_black = 90,
        bright_red=91,
        bright_green=92,
        bright_yellow=93,
        bright_blue=94,
        bright_magenta=95,
        bright_cyan=96,
        bright_white=97
    };
    static const string ESC_COLOR;
    static const string ESC_END;
    static const string BLINK_ON;
    static const string BLINK_OFF;
    static int get_xy(int &x, int &y);
    static int goto_xy(int x, int y);
    
    static string  bold(string text);
    static string italic(string text);
    static string color(string text, Colors fg, Colors bg);
    static string negative(string text);
    static string blinking(string text);
    
};

#endif /* console_ops_hpp */
