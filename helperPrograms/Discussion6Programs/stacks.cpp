#include<bits/stdc++.h> 
using namespace std; 
  

bool areParanthesisBalanced(string expr) 
{ 
    stack<char> s; 
    char x; 
  
    for (int i=0; i<expr.length(); i++) 
    { 
        if (expr[i]=='('||expr[i]=='['||expr[i]=='{') 
        { 
            // Push the element 
            s.push(expr[i]); 
            continue; 
        } 
        if (s.empty()) 
           return false; 
  
        switch (expr[i]) 
        { 
        case ')': 
  
            // Store the top element
            x = s.top(); 
            s.pop(); 
            if (x=='{' || x=='[') 
                return false; 
            break; 
  
        case '}': 
  
            // Store the top element 
            x = s.top(); 
            s.pop(); 
            if (x=='(' || x=='[') 
                return false; 
            break; 
  
        case ']': 
  
            // Store the top element in c 
            x = s.top(); 
            s.pop(); 
            if (x =='(' || x == '{') 
                return false; 
            break; 
        } 
    } 
  
    // Check Empty Stack 
    return (s.empty()); 
} 
int main() 
{ 
    string expr = "{()}[]"; 
  
    if (areParanthesisBalanced(expr)) 
        cout << "Balanced"; 
    else
        cout << "Not Balanced"; 
    return 0; 
} 