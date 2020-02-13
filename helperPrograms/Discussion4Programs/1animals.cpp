#include <iostream>
#include <string_view>
#include <string>
 
class Animal
{
protected:
    std::string m_name;
 
    // We're making this constructor protected because
    // we don't want people creating Animal objects directly,
    // but we still want derived classes to be able to use it.
    Animal(const std::string &name)
        : m_name{ name }
    {
    }
 
public:
    const std::string& getName() const { return m_name; }
    std::string_view speak() const { return "???"; }
};
 
class Cat: public Animal
{
public:
    Cat(const std::string &name)
        : Animal{ name }
    {
    }
 
    std::string_view speak() const { return "Meow"; }
};
 
class Dog: public Animal
{
public:
    Dog(const std::string &name)
        : Animal{ name }
    {
    }
 
    std::string_view speak() const { return "Woof"; }
};
 
int main()
{
    Cat cats[]{ { "Fred" }, { "Misty" }, { "Zeke" } };
    Dog dogs[]{ { "Garbo" }, { "Pooky" }, { "Truffle" } };
 
    for (const auto &cat : cats)
        std::cout << cat.getName() << " says " << cat.speak() << '\n';
 
    for (const auto &dog : dogs)
        std::cout << dog.getName() << " says " << dog.speak() << '\n';
 
    return 0;
} 