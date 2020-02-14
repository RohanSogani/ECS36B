#include <iostream>
#include <cstring>
using namespace std;
class Char
{
public:
void set(const char c)
{
p = new char;
*p = c;
}
void print(void) { std::cout << *p << std::endl; }
char *p;
};
void operator/(int a, int b);
void operator%(int a, int b);
int main()
{
        
    int a, b;
    int q = 0;
    cin>>a>>b;
    int i = 0;
    if(a > b) {
        cout<<"If"<<endl;
        for(a > 0; a - b; i++) {
            cout<<"for"<<endl;
            q = i;
        }
    }
    void operator/(int a, int b);
    void operator%(int a, int b);
    void operator/(int a, int b) {
        cout<<a/b<<" ";
    }
    cout<<q<<" "<<a%b<<endl;
    return 0;
}