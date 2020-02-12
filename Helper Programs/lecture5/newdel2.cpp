//
// newdel.cpp
//
// demonstrate the use of new and delete

#include<iostream>
using namespace std;

class MyClass {
  public:
  MyClass() {std::cout <<"MyClass constructed\n";}
  ~MyClass() {std::cout <<"MyClass destroyed\n";}
};

int main()
{
  int *p;

  p = new int;
  *p = 3;

  delete p;

  p = new int[10];
  for ( int i = 0; i < 10; i++ )
  {
    p[i] = i;
  }

  delete [] p;

  // deleting p a second time!
  //delete [] p;

  // deleting a null pointer is allowed
  p = NULL;

  MyClass * pt;
  MyClass x;
  pt = new MyClass[3];

  delete[] pt;
 
  //delete pt;
  return 0;
}
