#include <iostream> 
#include <string.h> 
  
using namespace std; 
  
// Class to implement operator overloading function 
// for concatenating the strings 
class AddString { 
  
public: 
    // Class object of string 
    char str[100]; 
  
    // No Parameter Constructor 
    AddString() {} 
  
    // Parametrized constructor to 
    // initialize class Variable 
    AddString(char str[]) 
    { 
        strcpy(this->str, str); 
    } 
  
    // Overload Operator+ to concatenate the strings 
    AddString operator+(AddString& S2) 
    { 
        // Object to return the copy 
        // of concatenation 
        AddString S3; 
  
        // Use strcat() to concat two specified string 
        strcat(this->str, S2.str); 
  
        // Copy the string to string to be return 
        strcpy(S3.str, this->str); 
  
        // return the object 
        return S3; 
    } 
}; 
  
// Driver Code 
int main() 
{ 
    // Declaring two strings 
    char str1[] = "You only"; 
    char str2[] = " live once"; 
  
    // Declaring and initializing the class 
    // with above two strings 
    AddString a1(str1); 
    AddString a2(str2); 
    AddString a3; 
  
    // Call the operator function 
    a3 = a1 + a2; 
    cout << "Concatenation: " << a3.str<<endl; 
  
    return 0; 
}