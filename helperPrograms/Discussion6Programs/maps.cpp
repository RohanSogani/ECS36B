#include <bits/stdc++.h> 
#include <unordered_map> 
using namespace std; 
  
// Function to check whether two strings 
// are an anagram of each other 
bool isanagram(string s1, string s2) 
{ 
    int l1 = s1.length(); 
    int l2 = s2.length(); 
  
    unordered_map<char, int> m; 
    if (l1 != l2) { 
        return false; 
    } 
    for (int i = 0; i < l1; i++) { 
        m[s1[i]]++; 
    } 
  
    for (int i = 0; i < l2; i++) { 
        if (m.find(s2[i]) == m.end()) { 
            return false; 
        } 
        else { 
            m[s2[i]]--; 
            if (m[s2[i]] == 0) { 
                m.erase(s2[i]); 
            } 
        } 
    } 
    return m.size() == 0; 
} 
  
// Test function 
void test(string str1, string str2) 
{ 
  
    cout << "Strings to be checked:\n"
         << str1 << "\n"
         << str2 << "\n"; 
  
    if (isanagram(str1, str2)) { 
        cout << "The two strings are"
             << "anagram of each other\n"; 
    } 
    else { 
        cout << "The two strings are not"
             << " anagram of each other\n"; 
    } 
    cout << endl; 
} 

int main() 
{ 
    // Get the Strings 
    string str1 = "dog"; 
    string str2 = "god"; 
  
    // Test the Strings 
    test(str1, str2); 
  
    // Get the Strings 
    str1 = "imagine"; 
    str2 = "imagetr"; 
  
    // Test the Strings 
    test(str1, str2); 
    return 0; 
} 