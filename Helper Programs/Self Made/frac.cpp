#include<iostream>
#include <cassert>
 
using namespace std;
class Fraction
{
private:
    int m_numerator;
    int m_denominator;
    
public:

    Fraction() // default constructor
    {
         m_numerator = 0;
         m_denominator = 1;
    }
    // Constructor with two parameters, one parameter having a default value
    
    Fraction(int numerator, int denominator=1)
    {
        cout<<"This";
        assert(denominator != 0);
        m_numerator = numerator;
        m_denominator = denominator;
    }
    int getNumerator() { return m_numerator; }
    int getDenominator() { return m_denominator; }
    double getValue() { return(m_numerator) / m_denominator; }
};

int main() {

    Fraction a;
    Fraction b(1);
    Fraction fiveThirds(5, 0);
    cout<<"Denominator is --> "<<fiveThirds.getDenominator();
    cout<<"Value is --> "<<fiveThirds.getValue()<<endl;
    return 0;
}