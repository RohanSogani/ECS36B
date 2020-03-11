#include <iostream>
using namespace std;
 
template <typename T>
T maxI(T x, T y)
{
    return (x > y)? x : y;
}
int main()
{
    cout << maxI(3, 7) << std::endl;
    cout << maxI(3.0, 7.0) << std::endl;
    cout << maxI(3, 7.0) << std::endl;
    return 0;
}

