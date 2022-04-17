
#ifndef FT_TEST_TOOLS
#define FT_TEST_TOOLS

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/* Print to set output color */
#define default "\033[0m"
#define black "\033[1;30m"
#define red "\033[1;31m"
#define green "\033[1;32m"
#define yellow "\033[1;33m"
#define blue "\033[1;34m"
#define purple "\033[1;35m"
#define cyan "\033[1;36m"
#define white "\033[1;37m"

/* Testing functions */
int expect_eq(char *test_name, void *real_val, void *test_val);
int expect_neq(char *test_name, void *real_val, void *test_val);

#endif