//
// compose4.cpp
//
// composition of objects
// In the following, B "HAS A" A
// Show the order of execution of the constructors of A and B
#include<iostream>
using namespace std;

class A
{
  public:
  A(void) { cout << "A::A() called" << endl; }
  int x;
};

class B
{
  public:
  B(void) { cout << "B::B() called" << endl; }
  int y;
  A a;
};

int main()
{
  B b;

  // assign element x of element a of b
  b.a.x = 1;

  // assign element y of b
  b.y = 2;
}
