#include<iostream>
using namespace std;
  
class Test {
    int value;
public:
    Test(int v);
};
  
Test::Test(int v) {
    value = v;
}
  
int main() {
    Test t[100];
    return 0;
}

