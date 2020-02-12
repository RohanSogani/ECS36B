//
// plus5.cpp
//
// overloading operator+ as a friend function
// Attempt to take the address of the temporary returned by operator+

#include<iostream>
using namespace std;

class Value
{ 
  public:
    void print(void) const { std::cout << i << std::endl; }
    void set(int x) { i = x; }
    int get(void) const { return i; }
    friend ostream& operator << (ostream& os, const Value& v)
    { os << v.i; return os; }
    friend const Value operator+(const Value& x, const Value& y)
    { Value vtmp; vtmp.set(x.i+y.i); return vtmp; }
  private:
    int i;
};

int main()
{
  Value v1, v2, v3;
  v1.set(2);
  v2.set(3);
  v3.set(4);
  cout << v1+v2 << endl;
  cout << v1 << " " << v2 << endl;
  const Value *a = &(v1+v2);
}
