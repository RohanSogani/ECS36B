//
// initorder1.cpp
//
// initialization order in a ctor
#include<iostream>
using namespace std;

class Pair
{ 
  public:
    Pair(int a, int b): ma(a), mb(ma+b) {}
    int ma;
    int mb;
};

int main()
{
  Pair p(3,4);
  cout << p.ma << " " << p.mb << endl;
}
