//
//  unit_tests.cpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#include "unit_tests.hpp"
#include "file_ops.hpp"
#include "text_ops.hpp"
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
    FileManager fm;
    Tree t;
    fm.read_file_to_tree(t,Config::default_folder + "/test_input_file.txt");
    ASSERT_TRUE(t.get_line_count() != 0, "error");
    return 0;
}
int test_search(){
    FileManager fm;
    Tree t;
    fm.read_file_to_tree(t,Config::default_folder + "/test_input_file.txt");
    ASSERT_TRUE(t.get_line_count() != 0, "error");
    t.search("origin main");
    printf("search for: origin main\n");
    auto s = t.get_path_to_found();
    printf("%s", s.c_str());
    return 0;
}
int test_read_forest(){
    FileManager fm;
    Forest f;
    fm.read_file_to_forest(f, Config::default_folder + "/test_input_file.txt");
    return 0;
}
int test_search_forest(){
    FileManager fm;
    Forest f;
    fm.read_file_to_forest(f, Config::default_folder + "/test_input_file.txt");
    f.dump();
    f.search("lay put");
    printf("search for: lay put\n");
    string s= f.get_path_to_found();
    printf("%s", s.c_str());
    return 0;
}
int test_read_folder(){
    FileManager fm;
    Forest f;
    fm.read_folder_to_forest(f, Config::default_folder);
    f.dump();
    f.search("put origin main 1-5");
    printf("search for: put origin main 1-5\n");
    string s= f.get_path_to_found();
    printf("%s", s.c_str());
    string t = f.get_translation_for_found_items();
    printf("translation: %s\n",t.c_str());
    return 0;
}
int run_all_tests(){
    RUN_TEST(test_read_file);
    RUN_TEST(test_parsing_lines);
    RUN_TEST(test_indent_no);
    RUN_TEST(test_search);
    RUN_TEST(test_read_forest);
    RUN_TEST(test_search_forest);
    RUN_TEST(test_read_folder);
    return 0;
}
