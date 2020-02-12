//
// initconst1.cpp
//
// initialization of a constant data member
// Note: this program fails to compile
#include<iostream>
#include<stdexcept>
using namespace std;

class Value
{ 
  public:
    Value(int x, int y) { i = x; c = y; }
    void set(int x) { i = x; }
    int get(void) const { return i; }
    friend ostream& operator << (ostream& os, const Value& v)
    { os << v.i; return os; }
    const int c;
  private:
    int i;
};

int main()
{
  Value v(3,42);
  cout << v << endl;
  cout << v.c << endl;
}
