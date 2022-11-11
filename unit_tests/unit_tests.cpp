//
//  unit_tests.cpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#include "unit_tests.hpp"
#include "file_ops.hpp"
#include "config.hpp"

int test_read_file(){
    FileManager fm;
    Tree t;
    fm.read_file_to_tree(t,Config::default_folder + "/test_input_file.txt");
    ASSERT_TRUE(t.get_line_count() != 0, "error");
    return 0;
}
int test_parsing_lines()
{
    FileManager fm;
    Tree t;
    fm.read_file_to_tree(t,Config::default_folder + "/test_input_file.txt");
    ASSERT_TRUE(t.get_line_count() != 0, "error");
    return 0;
}
int test_indent_no(){
    return 1;
}
int test_line_no(){
    return 1;
}
int run_all_tests(){
    RUN_TEST(test_read_file);
    RUN_TEST(test_parsing_lines);
    RUN_TEST(test_indent_no);
    RUN_TEST(test_line_no);
    return 0;

}
