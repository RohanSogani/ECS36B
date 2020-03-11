#include <iostream>
struct point {
  point(int a, int b) {
    std::cout << "hey" << std::endl;
  }
};

struct Circle {
  Circle(): Point(1, 2) {}
  point Point;
};

int main() {
  Circle c;
  return 0;
}
