#include "fttesttools.h"

/*    Test tools       */
void int_expect_eq(char *test_name, int real_val, int test_val) {
	if (real_val == test_val) {
		set_green();
		printf("%s passed\n", test_name);
		return;
		}
	set_red();
	printf("%s failled\n", test_name);
	return;
}

void int_expect_neq(char *test_name, int real_val, int test_val) {
	if (real_val != test_val) {
		set_green();
		printf("%s passed\n", test_name);
		return;
		}
	set_red();
	printf("%s failled\n", test_name);
	return;
}

void char_expect_eq(char *test_name, char real_val, char test_val) {
	if (real_val == test_val) {
		set_green();
		printf("%s passed\n", test_name);
		return;
		}
	set_red();
	printf("%s failled\n", test_name);
	return;
}

void char_expect_neq(char *test_name, char real_val, char test_val) {
	if (real_val != test_val) {
		set_green();
		printf("%s passed\n", test_name);
		return;
		}
	set_red();
	printf("%s failled\n", test_name);
	return;
}

void sizet_expect_eq(char *test_name, size_t real_val, size_t test_val) {
	if (real_val == test_val) {
		set_green();
		printf("%s passed\n", test_name);
		return;
		}
	set_red();
	printf("%s failled\n", test_name);
	return;
}

void sizet_expect_neq(char *test_name, size_t real_val, size_t test_val) {
	if (real_val != test_val) {
		set_green();
		printf("%s passed\n", test_name);
		return;
		}
	set_red();
	printf("%s failled\n", test_name);
	return;
}
