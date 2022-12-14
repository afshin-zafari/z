//
//  text_ops.cpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#include "text_ops.hpp"

vector<string> Text:: split(string str, char splitter){
    vector<string> result;
    string current = "";
    for(int i = 0; i < str.size(); i++){
        if(str[i] == splitter){
            if(current != ""){
                result.push_back(current);
                current = "";
            }
            continue;
        }
        current += str[i];
    }
    if(current.size() != 0)
        result.push_back(current);
    return result;
}
int Text::left_ws_count(string str){
    int count = 0;
    for(int i=0; i< str.size(); i++){
        if(str[i] == ' '){
            count++;
        } else if(str[i] == '\t' ){
            count += 4;
        }
        else
            break;
    }
    return count;    
}
void Text::left_trim(string &s) {
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !isspace(ch);
    }));
}
bool Text::contains(string text, char c){
    return text.find(c) != string::npos;
}
string Text::to_lower(string text){
    std::transform(text.begin(), text.end(), text.begin(), [](unsigned char c){return tolower(c);});
    return text;
}
void test()
{
    // insert code here...
    /*
    printf("\x1B[31mTexting");
    printf("\033[0m\t\t");
    printf("\033[3;42;30mTexting\033[0m\t\t");
     */
    
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

}
