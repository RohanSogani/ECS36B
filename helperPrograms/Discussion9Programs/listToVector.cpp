#include<iostream>
#include<list>
#include<vector>
#include<string>

using namespace std;

int main(){
list<string> l;
	l.push_back("1");
	l.push_back("2");
	l.push_back("3");
	l.push_back("4");
 	// Initialize a vector with std::list
	vector<string> vecOfStr(l.begin(), l.end());
	
	for(string str : vecOfStr)
		cout<<str;

	return 0;
}


