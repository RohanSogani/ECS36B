//
// overload1.cpp
//
// implement operator<< as a friend function
// declare the operator in the Value class
// define the operator outside of the class

#include<iostream>
using namespace std;

class Value
{ 
  public:
    void print(void) const { std::cout << i << std::endl; }
    void set(int x) { i = x; }
    int get(void) const { return i; }
    friend ostream& operator << (ostream& os, const Value& v);
  private:
    int i;
};

ostream& operator<< (ostream& os, const Value& v)
{ os << v.i; return os; }

int main()
{
  Value v;
  v.set(3);
  cout << v << endl;
}
