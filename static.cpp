#include <iostream>

static int pow(int a, int b) {
	int result = a;
	if (b) {
		for (size_t i = 0; i < (abs(b) - 1); i++) {
			result *= a;
		}
		return result;
	}
	return 1;
}


extern int return_pow(int a, int b) {
	return pow(a, b);
}