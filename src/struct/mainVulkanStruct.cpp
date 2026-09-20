//
// Created by vanka on 20.09.2026.
//

#include <iostream>

enum Type { StringType = 0, IntType = 1, FloatType = 2 };

struct String {
    Type sType = StringType;
    char str[32];
};

struct Int {
    Type sType = IntType;
    int num;
};

struct Float {
    Type sType = FloatType;
    float num;
};

void printString(const String& i) {
    std::cout << i.str << "\n";
}

void printInt(const Int& i) {
    std::cout << i.num << "\n";
}

void printFloat(const Float& i) {
    std::cout << i.num << "\n";
}

int main() {
    String A{.str = "Hello"};
    // for (int i = 0; i < 31 && "Hello"[i] != '\0'; ++i) A.str[i] = "Hello"[i];
    // A.str[31] = '\0';
    Int B{.num = 26};
    Float C{.num = 96.69f};


    void* list[3] = {static_cast<void*>(&A), static_cast<void*>(&B), static_cast<void*>(&C)};

    for (int i = 0; i < std::size(list); i++)
    {
        Type* type = static_cast<Type*>(list[i]);
        switch (*type) {
        case StringType: {
                printString(*static_cast<String*>(list[i]));
                break;
        }
        case IntType: {
                printInt(*static_cast<Int*>(list[i]));
                break;
        }
        case FloatType: {
                printFloat(*static_cast<Float*>(list[i]));
                break;
        }
        default:
            break;
        }
    }
}