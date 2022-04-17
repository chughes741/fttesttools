#include "fttesttools.h"

int main() {
	printf("Hello World!\n");
	int one = 10;
	int ten = 10;
	expect_eq("Mock", &one, &ten);
}
