//
// array.cpp
// use C++11 arrays
//

#include<iostream>
#include<string>
#include<array>
using namespace std;

int main()
{
  array<char,64> c;
  array<float,32> f;
  array<string,8> s;

  c[24] = 'x';
  f[12] = 1.23f;
  s[7] = "abcd";
}
