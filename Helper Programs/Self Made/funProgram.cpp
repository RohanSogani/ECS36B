#include <iostream>
using namespace std;
#define N 100
class funPrint{
	int i;
public:
	funPrint(){
		cout << ++i << " ";
	}
};

//int funPrint::i = 0;

int main(){
	funPrint oj[N];
	return 0;
}