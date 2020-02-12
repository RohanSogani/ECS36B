#include<iostream>
using namespace std;

/* class Something{
public:
    int m_value = 1; //non-static
    static int s_value; //static
};

int Something::s_value = 1;
int main(){
    Something first;
    Something second;
    
    first.m_value = 2;
    first.s_value = 2;
    
    std::cout<<"I am Non Static\n";
    std::cout << first.m_value << '\n';
    std::cout << second.m_value << '\n';
    std::cout<<"I am Static\n";
    std::cout << Something::s_value << '\n';
    std::cout << Something::s_value << '\n';
 
    return 0;
} */


class Something{
private:
    static int p = 10;
public:
    static int s_value; // declares the static member variable
};

//int Something::p ;
int Something::s_value = 1; // defines the static member variable
 
int main(){
    // note: we're not instantiating any objects of type Something
    Something::p = 10;
    Something::s_value = 2;
    std::cout << Something::s_value << '\n';
    return 0;
}

/*
class IDGenerator{
private:
    static int s_nextID; // Here's the declaration for a static member
 
public:
     static int getNextID(); // Here's the declaration for a static function
};
 
// Here's the definition of the static member outside the class.  Note we don't use the static keyword here.
// We'll start generating IDs at 1
int IDGenerator::s_nextID = 1;
 
// Here's the definition of the static function outside of the class.  Note we don't use the static keyword here.
int IDGenerator::getNextID() { return s_nextID++; } 
 
int main(){
    for (int count=0; count < 5; ++count)
        std::cout << "The next ID is: " << IDGenerator::getNextID() << '\n';
 
    return 0;
}
*/