#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    int arr[] = { 10, 20, 30, 40, 50 };
    
    //vector declaration
    vector<int> v1(3);
    
    //copying array elements to the vector
    copy(arr, arr + 3, v1.begin());

    for(int i = 0; i < v1.size(); i++) {
        cout<<v1[i]<<" ";
    }
    cout<<"\n";
    return 0;
}