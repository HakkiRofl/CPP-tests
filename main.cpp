// Tests_CPP.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "inline.h"

int sub(int a, int b);
static int pow(int a, int b);
int return_pow(int a, int b);

// Объявление класса
class staticClass {
public:
    static size_t counter;
    staticClass() {
        counter++;
    };
    ~staticClass() {};
};

size_t staticClass::counter = 0;


int main()
{
    int a = 100;
    int b = 20;
    printf("a = %i, b = %i, max = %i\n", a, b, max(a, b));
    a = 90;
    b = 80;
    printf("a = %i, b = %i, max = %i\n", a, b, max(a, b));
    printf("a = %i, b = %i, sub = %i\n", a, b, sub(a, b));
    a = 2;
    b = 3;
    printf("a = %i, b = %i, pow = %i\n", a, b, pow(a, b));
    a = 2;
    b = -3;
    printf("a = %i, b = %i, pow = %f\n", a, b, 1.0 / pow(a, b));

    staticClass *c = new staticClass[12];
    printf("static Counter in class: %i\n", staticClass::counter);
    delete[] c;

}


static int pow(int a, int b) {
    return return_pow(a, b);
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"
