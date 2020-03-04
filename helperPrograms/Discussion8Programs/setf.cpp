#include<iostream>

int main() {
    std::cout.setf(std::ios::showpos); // turn on the std::ios::showpos flag
    std::cout << 619 << '\n';

    std::cout.unsetf(std::ios::showpos); // turn off the std::ios::showpos flag
    std::cout << 918 << '\n';
}
