#include <string>
#include <iostream>
 
class MyString
{
private:
	std::string m_string;
public:
    MyString(int x) // allocate string of size x
	{
		m_string.resize(x);
	}
 
	MyString(const char *string) // allocate string to hold string value
	{
		m_string = string;
	}
 
	friend std::ostream& operator<<(std::ostream& out, const MyString &s);
 
};
 
std::ostream& operator<<(std::ostream& out, const MyString &s)
{
	out << s.m_string;
	return out;
}
 
void printString(const MyString &s)
{
	std::cout << s;
}
 
int main()
{
	MyString mine = 'x'; // Will compile and use copy initialization for MyString
	std::cout << mine;
    //std::cout<<"Hello"<<std::endl;
	printString('x'); // Will compile and implicit convert to a MyString
	return 0;
}