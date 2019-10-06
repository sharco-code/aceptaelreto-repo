#include <iostream>

void fun(int a) {
    for(short int  i = 0; i < a; i++) {
        std::cout << "Hola mundo." << std::endl;
    }
}

int main(void) {

    short int a;
    std::cin >> a;
    fun(a);

    return 0;
}