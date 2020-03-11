#include<iostream>
using namespace std;
  
class Test1
{
    int x;
public:
    void show() {  }
};
  
class Test2
{
    int x;
public:
    virtual void show() {  }
};
  
int main(void)
{
    cout<<sizeof(Test1)<<endl;
    cout<<sizeof(Test2)<<endl;
    return 0;
}

