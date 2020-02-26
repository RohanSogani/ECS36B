// C++ code to demonstrate the 
// working of for_each loop 

#include<iostream> 
#include<vector> 
#include<algorithm> 
using namespace std; 

void printx2(int a) 
{ 
	cout << a * 2 << " "; 
} 

struct Class2 
{ 
	void operator() (int a) 
	{ 
		cout << a * 3 << " "; 
	} 
} ob1; 


int main() 
{ 
	vector<int> arr1 = { 4, 5, 8, 3, 1 }; 
	
	cout << "Multiple of 2 of elements are : "; 
	for_each(arr1.begin(), arr1.end(), printx2); 
	
	cout << endl; 
	
	cout << "Multiple of 3 of elements are : "; 
	for_each(arr1.begin(), arr1.end(), ob1); 
	
	cout << endl; 

    // initializing array 
	int arr[5] = { 1, 5, 2, 4, 3 }; 
	
	cout << "Multiple of 2 of elements are : "; 
	for_each(arr, arr + 5, printx2); 
	
	cout << endl; 
	
	cout << "Multiple of 3 of elements are : "; 
	for_each(arr, arr + 5, ob1); 
	
	cout << endl; 
	
	
} 
