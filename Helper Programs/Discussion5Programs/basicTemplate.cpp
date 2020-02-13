#include<iostream>

using namespace std;

template <typename T> // this is the template parameter declaration
T maxy(T x, T y)
{
    return (x > y) ? x : y;
}

int main() {
    int a = 5, b = 6;
    double c = 5.5, d = 6.6;
    cout<<"Max 1 --> "<<maxy(a, b)<<endl;
    cout<<"Max 2 --> "<<maxy(c, d)<<endl;
    return 0;
}