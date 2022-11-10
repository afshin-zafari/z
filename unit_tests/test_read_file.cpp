//
//  test_read_file.cpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-09.
//

#include "test_read_file.hpp"
/*
 tree = read file
 result, state = search ( tree , text)
 result2, state = search ( tree , text + word)
 xxx_output = format ( result , xxx)
 choice = menu ( xxx_output)
 refine_search ( tree, state , choice)
 ------
 forest = for each file in for each folder in INPUT_FOLDER: read file
 result,state = search(forest, text)
 ----------
 Line:
    indent_no
    line_no
    text
    translate
    
 Tree:
    Line[]
    last_state or last result
    root
    tree_id_in_forest
 Result:
    line
    search_text
    found[]
        word
        start pos
        end pos
 Forest
    tree[]
    last_state
 -------
 text operations
    split
    find in string
    synonym matching
    case conversion
    
 keyboard ops
 show operations
 menu ops
 folder/file in/out
 tree ops
    read file
    parse
    populate lines
    search from root
    search root down to N level
    get path to root
    search refinement
    
 -------
 search ( tree, text)
    result = []
    words = split(text);
    for each line in tree
        for each word in words
            if found_info=find(word,line):
                result.append(pair(line.line_no, found_info))
    return result
 ---------
 search(forest, text)
    result_total
    for each tree in forest:
        result = search(tree, text)
        result_total.append ( pair(tree.id, result) )
    return result_total
 ---------
 get_text_to_root(tree , result)
    last_line=_max(result, line_no)
    text =""
    for index =0..last_line
        text += tree.lines[index].text
    return text
 ---------
 add_effect_to(text, bold/ital/color/blinking)
    switch (effect)
        prefix = ...
        postfix = ...
    return prefix + text + postfix
 ---------
 get_char_unti_ws()
    word = ""
    c= getch()
    while( c != white-space)
        word += c;
    return word
 ---------
  show_menu(forest)
    keys: arrows, tab, enter, 0-9, +/- ctrl/alt/shift
    text_for_menu = translate to menu(forest.result)
    choice = build_menu_and_wait( text_for_menu)
    return choice
 ---------
 cursor movement/clear
    move to x,y
    erase to eol
    save cursor pos
    restore cursor pos
    move down/up n rows
    move left/right n columns
 #define CTRL_KEYPRESS(k) ((k)  & 0x1f)  //== Ctrl + k
 
 ---------
 
 main
    read forest
    main_loop
        get word from user
        input_text += word
        r = search(forest,word)
        show r
        get user choice
        r = refine (forest , word, choice)
        show r
 ---------
 folder
    file
        tree-1
            w1 w2 w3 w4 w5 w6: command c p1 p2 p3 p4
            w1 w2 w3 w4 w5 w6: command c p1 p2 p3
            w1 w2 w3 w4 w5 w6: command c p1    p3 p4
            w1 w2 w3 w4 w5 w6: command c p1 p2    p4
                                : cmd AAA
            w1 s1 s2 s3         +:  --enable-debug
                w2 s s s s
                    
        tree-2
 */
