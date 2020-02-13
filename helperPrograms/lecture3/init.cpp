//
// init.cpp
//
// initialization of variables and data members
// depends on their declaration
// see: https://en.cppreference.com/w/cpp/language/zero_initialization
//
#include <iostream>
using namespace std;

class V
{
  public:
  int x,y,z;
};

// variables declared at file scope
double f[3]; // zero-initialized to three 0.0's
int nglobal; // zero-initialized to 0

int main(int argc, char* argv[])
{
  V a;
  cout << "V a;       " << a.x << " " << a.y << " " << a.z << endl;
  cout << "double f[3]; " << f[0] << " " << f[1] << " " << f[2] << endl;
  // global variable (declared at file scope)
  cout << "int nglobal    " << nglobal << endl;
  // variable declared inside a function  (function main(..))
  int n;
  cout << "int n;         " << n << endl;
  // variable explicitly declared static inside a function
  static int ns; // zero-initialized to 0
  cout << "static int ns; " << ns << endl;
}
