#include<iostream> 
using namespace std; 
class P 
{ 
public: 
    virtual void show() = 0; 
}; 
  
class Q : public P {  
   int x; 
}; 
  
int main(void) 
{ 
    Q q; 
    return 0; 
}