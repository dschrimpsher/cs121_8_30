#include <iostream>
#include "subprogram.hpp"

int main() {
    int a = 0;
    std::cout<<"Hello Class"<<std::endl;
    for (a = 0; a<100; a++) {
        std::cout<<"the value of a^2 is "<<callMe(a)<<std::endl;
    }
    return 0;
}