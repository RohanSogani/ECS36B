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
    int y;
    int &x = y;
    Cat cat{ "Fred" };
    std::cout << "cat is named " << cat.getName() << ", and it says " << cat.speak() << '\n';
 
    Dog dog{ "Garbo" };
    std::cout << "dog is named " << dog.getName() << ", and it says " << dog.speak() << '\n';
 
    Animal *pAnimal{ &cat };
    std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';
 
    pAnimal = &dog;
    std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';
 
    return 0;
}