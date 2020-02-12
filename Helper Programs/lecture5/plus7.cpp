//
// plus7.cpp
//
// overloading operator+
// return value of operator+ is NOT const
// allows for nonsensical expression (v1+v2)=v3
#include<iostream>
using namespace std;

class Value
{ 
  public:
    Value(void) {}
    explicit Value(int x) { i = x; }
    void print(void) const { std::cout << i << std::endl; }
    void set(int x) { i = x; }
    int get(void) const { return i; }
    friend ostream& operator << (ostream& os, const Value& v)
    { os << v.i; return os; }
  private:
    int i;
};
Value operator+(const Value& x, const Value& y)
{ return Value(x.get()+y.get()); }

int main()
{
  Value v1, v2, v3;
  v1.set(2);
  v2.set(3);
  v3.set(4);
  (v1+v2)=v3;
  cout << v1 << " " << v2 << " " << v3 << endl;
}
