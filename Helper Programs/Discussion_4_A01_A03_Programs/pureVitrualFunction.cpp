#include <string>
#include <iostream>
 
class Animal // This Animal is an abstract base class
{
protected:
    std::string m_name;
 
public:
    Animal(std::string name)
        : m_name(name)
    {
    }
 
    std::string getName() { return m_name; }
    virtual const char* speak() = 0; // note that speak is a pure virtual function
};
 
const char* Animal::speak()
{
    return "buzz"; // some default implementation
}
 
class Dragonfly: public Animal
{
 
public:
    Dragonfly(std::string name)
        : Animal(name)
    {
    }
 
    virtual const char* speak() // this class is no longer abstract because we defined this function
    {
        return Animal::speak(); // use Animal's default implementation
    }
};
 
int main()
{
    Dragonfly dfly("Sally");
    std::cout << dfly.getName() << " says " << dfly.speak() << '\n';
 
    return 0;
}