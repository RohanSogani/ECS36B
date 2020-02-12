#include<iostream>

using namespace std;

void f(int* i, int &j, int k)
{
cout<<"before i->"<<*i<<endl;  
i += 10;
cout<<"i-> "<<*i<<endl;
cout<<"add of i "<<i<<endl;
j += 10;
cout<<"j-> "<<j<<endl;
cout<<"add of j "<<&j<<endl;
k += 10;
cout<<"k-> "<<k<<endl;
}
int main()
{
int a=1, b=2, c=3;
cout<<"add of a "<<&a<<endl;
cout<<"add of b "<<&b<<endl;
f(&a,b,c);
std::cout<< a<< std::endl << b << std::endl << c << std::endl;
}