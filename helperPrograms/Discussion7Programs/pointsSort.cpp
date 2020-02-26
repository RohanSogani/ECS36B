#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 
  
// An interval has start time and end time 
struct Interval { 
    int start, end; 
}; 
  
// Compares two intervals according to staring times. 
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
  
    // sort the intervals in increasing order of 
    // start time 
    //sort(v.begin(), v.end(), compareInterval); 
    sort(v.begin(), v.end(), classCompareInterval());
    cout << "Intervals sorted by start time : \n"; 
    for (auto x : v) 
        cout << "[" << x.start << ", " << x.end << "] "; 
    
    return 0; 
}