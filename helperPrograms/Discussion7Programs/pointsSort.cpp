#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 
  
struct Interval { 
    int start, end; 
}; 
  

bool compareInterval(Interval i1, Interval i2) { 
    return (i1.start < i2.start); 
}

class classCompareInterval{
    public:
        bool operator()(const Interval &i1, const Interval &i2) {
            return (i1.start < i2.start); 
        }
};
  
int main() { 
    vector<Interval> v { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } }; 
  
    sort(v.begin(), v.end(), classCompareInterval());
    
    cout << "Intervals sorted by start time : \n"; 
    for (auto x : v) 
        cout << "[" << x.start << ", " << x.end << "] "; 
    
    return 0; 
}