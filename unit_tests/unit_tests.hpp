//
//  unit_tests.hpp
//  SampleAppConsole
//
//  Created by Afshin Zafari on 2022-11-11.
//

#ifndef unit_tests_hpp
#define unit_tests_hpp

#include <stdio.h>
#define PRINT(msg)    printf("%s:%d %s\n", __FILE__, __LINE__, msg)
#define ASSERT_TRUE(pred, msg)   if( !(pred)) {PRINT(msg);}
#define RUN_TEST(func)   do{                                    \
                            printf("[      ]\n");               \
                            if (!func())                        \
                            {                                   \
                             printf("[PASSED] %s\n", #func);    \
                            } else {                            \
                             printf("[FAILED] %s\n", #func);    \
                            }                                   \
                            printf("[      ]\n");               \
                          } while(0);
int run_all_tests();
#endif /* unit_tests_hpp */
