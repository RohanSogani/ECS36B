#include<iostream>
using namespace std;

template <class T>
class Storage
{
private:
    T m_value;
public:
    Storage(T value)
    {
         m_value = value;
    }
 
    ~Storage()
    {
    }
 
    void print()
    {
        std::cout << m_value << '\n';
    }
};

int main()
{
    // Define some storage units
    Storage<int> nValue(5);
    Storage<double> dValue(6.7);
 
    // Print out some values
    nValue.print();
    dValue.print();
}