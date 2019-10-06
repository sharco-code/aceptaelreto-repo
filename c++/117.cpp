#include <iostream>
#include <string>
int main() {
    short a;
    std::cin>>a;
    std::cin.get();
    std::string b;
    for(short i=0;i<a;i++) {
        std::getline(std::cin,b);
        std::cout<<b.replace(b.begin(),(b.begin()+4),"Hola, ")<<".\n";
    }
}