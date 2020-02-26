#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1); 
    v.push_back(10);
    v.push_back(2);
    v.push_back(90);
    v.push_back(3);
    v.push_back(5);
    v.push_back(1000);

    int x1 = 3;

    sort(v.begin(), v.end());
	
	if(binary_search(v.begin(), v.end(), x1)) {
		cout << "found " << x1 << endl;
	}
	else {
		cout << "could not find " << x1 << endl;
	}

    int x2 = 10000;

	
	if(binary_search(v.begin(), v.end(), x2)){
		cout << "found " << x2 << endl;
	}
	else {
		cout << "could not find " << x2 << endl;
	}
	return 0;
}