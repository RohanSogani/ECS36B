//
// assign2.cpp
//
// Demonstrate the use of a class
// Use the default assignment operator
// Include a destructor in String

#include<iostream>
#include<cstring> // strcpy
#include<cstdlib> // malloc
using namespace std;

class String
{
  public:
  void set(const char *s)
  {
    p = (char*) malloc(strlen(s));
    strcpy(p,s);
  }
  void print(void)
  {
    cout << p << endl;
  }
  void print_p_value(void)
  {
    cout << (int*)p << endl;
  }
  ~String(void) { free(p); }
  private:
  char *p;
};

int main()
{
  String s1, s2;

  cout << "before set" << endl;
  s1.print_p_value();
  s2.print_p_value();

  s1.set("first");
  s2.set("second");

  cout << "before assignment" << endl;
  s1.print();
  s1.print_p_value();
  s2.print();
  s2.print_p_value();

  s2 = s1;

  cout << "after assignment" << endl;
  s1.print();
  s1.print_p_value();
  s2.print();
  s2.print_p_value();
}
