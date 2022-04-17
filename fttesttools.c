#include "fttesttools.h"

/*    Test tools       */


int *expect_eq(char *test_name, void *real_val, void *test_val) {
	if ((int *)real_val == (int *)test_val) {
		printf("%s", green);
		printf("%s passed\n", test_name);
		return 0;
	}
	printf("%s", red);
	printf("%s failed\n", test_name);
	printf("Expected: %s, \nResult: %s\n", real_val, test_val);
	return 1;	
}

int expect_neq(char *test_name, void *real_val, void *test_val) {
	if (real_val != test_val) {
		printf("%s", green);
		printf("%s passed\n", test_name);
		return 0;
	}
	printf("%s", red);
	printf("%s failed\n", test_name);
	return 1;
}
