#include<iostream>
#include<set>
using namespace std;

int main() 
{ 
    // empty set container 
    set <int> s;         
  
    // insert elements in random order 
    s.insert(40); 
    s.insert(30); 
    s.insert(60); 
    s.insert(20); 
    s.insert(50); 
    s.insert(50); // only one 50 will be added to the set 
    s.insert(10); 
  
    // printing set s 
    set <int, greater <int> > :: iterator itr; 
    cout << "\nThe set s is : "; 
    for (itr = s.begin(); itr != s.end(); ++itr) 
    { 
        cout << '\t' << *itr; 
    } 
    cout << endl; 

}