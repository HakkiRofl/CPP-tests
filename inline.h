#ifndef INLINE_H
#define INLINE_H

//static int a = 100;
//static int b = 80;


// Ó÷òèòå, ÷òî âñòğîåííûå ôóíêöèè íå ğàáîòàşò â ğåæèìå îòëàäêè!


inline int max(int a, int b) {
	return (a > b ? a : b);
}

inline int min(int a, int b) {
	return (a < b ? a : b);
}

inline int add(int a, int b) {
	return a + b;
}

#endif