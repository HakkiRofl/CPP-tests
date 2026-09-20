//
// Created by vanka on 20.09.2026.
//

#include <iostream>
#include <ostream>
#include <string>

typedef enum type {StringType = 0, IntType = 1, FloatType = 2};

struct Base {
    type sType;
};

struct String : Base {
    char str[32];
    String(const char* _str) { strcpy_s(str, sizeof(char) * 32, _str); sType = StringType; };
};

struct Int : Base {
    int num;
    Int(int num) : num(num) { sType = IntType; };
};

struct Float : Base{
    float num;
    Float(float num) : num(num) { sType = FloatType; };
};



void printString(const String& i) {
    std::cout << i.str << std::endl;
}

void printInt(const Int& i) {
    std::cout << i.num << std::endl;
}

void printFloat(const Float& i) {
    std::cout << i.num << std::endl;
}

int main() {
    String A("Hello");
    Int B(26);
    Float C{96.69};

    void* list[3] = {static_cast<void*>(&A), static_cast<void*>(&B), static_cast<void*>(&C)};



    for (int i = 0; i < std::size(list); i++)
    {
        Base* base = static_cast<Base*>(list[i]);  // безопасно: Base — общая часть
        switch (base->sType) {
        case StringType: {
                printString(*static_cast<String*>(base));
                break;
        }
        case IntType: {
                printInt(*static_cast<Int*>(base));
                break;
        }
        case FloatType: {
                printFloat(*static_cast<Float*>(base));
                break;
        }
        default:
            break;
        }
    }

    return 0;
}