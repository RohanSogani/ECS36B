#include <iostream>
template<typename T>
void f(int){std::cout << "template"; }

void f(int){std::cout << "regular"; }

int main() {
  f(1);
  return 0;
}
