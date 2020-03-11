#include<iostream> 
using namespace std;
class base{
public:
       base(){          
           cout<<"BCon ";
       }
       ~base(){
	   cout<<"BDest ";
       }
};
class derived: public base{
public:
       derived(){     cout<<"DCon ";
       }
       ~derived(){     cout<<"DDest ";
       }
};

int main(){
derived object;
return 0; 
}

