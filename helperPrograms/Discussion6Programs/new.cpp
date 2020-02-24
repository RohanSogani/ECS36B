#include <iostream>
#include <list>
#include <deque>
#include <vector>
using namespace std;

/*class read {
  public:
  int num;
  read(int i): num(i) {};
  void readLn();
  void print(int n) {cout << num<< endl;} 
};
void readLn(vector <read *> rpos){
    int i = 0;
    cin >> i;
    if(i < 0) {
      rpos.push_back(new read(i));
    }
  }*/
int main() {
  vector <int> r;
  r.push_back(-10);
  //r.push_back(10);
  /* r.push_back(-1);
  r.push_back(1);
  r.push_back(1000);
  r.push_back(10);
  r.push_back(0);
  r.push_back(11);
  r.push_back(-11);
  r.push_back(-2); */
  int max = 0;
  /*for(int j = r.size(); j != 1; j--) {
    for(int k = 0; k < j; k++){
      if(r[k] > r[max]){
        max = k;
      }
    }
    if(max != j - 1 ){
      int temp = r[j - 1];
      r[j - 1] = r[max];
      r[max] = temp;
    }
    max = 0;
  }*/
  for(int i = 0; i < r.size(); i++)
    cout<<r[i]<<endl;
  vector <int>::iterator i, j;
  int temp;
  for(i = r.begin(); i != r.end(); i++) {
    for(j = i; j != r.end(); j++) {
    cout<<"first val "<<*(j-1)<<endl;
      if(*j < 0 && *j < *(j-1)){
          cout<<"first val "<<*(j-1)<<endl;
          temp = *(j - 1);
          *(j-1) = *j;
          *j = temp;
      }
    }
  }
  for(int i = 0; i < r.size(); i++)
    cout<<r[i]<<endl;


  /*deque <int> gquiz; 
  gquiz.push_front(1);
  for(int i =0; i < gquiz.size(); i++)
    cout<<gquiz[i];
  list <int> buf;
  buf.insert(buf.end(), 1);*/
  
  
  std::cout << "Hello World!\n";
}