#include<iostream>
using namespace std;

class Thing2 {
public:

char c;   
int *p;   
float& f;  
Thing2(char ch, float x) { c = ch; p = &x; f = x; }
}
/* class B{
    private:
        int x;
    public:
        B(){};
        B(int x_val): x(x_val) {};
        void displayB() {
            cout<<"X = "<<x<<endl;
        }

};

class D: public B {
    private:
        int y;
    public:
        D(){};
        void displayB() {
            cout<<"Y = "<<y<<endl;
        }
}; */
int main(){
     Thing2 derived;
};