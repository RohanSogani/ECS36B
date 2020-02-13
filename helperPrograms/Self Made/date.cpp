#include<iostream>
#include <cassert>
 
using namespace std;
class Date
{
    private:
        int m_year = 1900;
        int m_month = 1;
        int m_day = 1 ;
    
    public:
    // No constructor provided, so C++ creates a public default constructor for us
    /* Date () {
        cout<<":\\"<<endl;
    } */
    int getYear() { return m_year; }
    int getMonth() { return m_month; }
};
 
int main()
{
    Date date; // calls implicit constructor
    cout<<date.getYear()<<endl;
    return 0;
}