#include <iostream>
#include <string>
using namespace std;

class Animal {
  public:
    Animal(string theName, int wt);   // Constructor
    void who() const;                 // Display name and weight

  private:
    string name;                      // Name of the animal
    int weight;                       // Weight of the animal
};

// Constructor
Animal::Animal(string theName, int wt): name(theName), weight(wt) {}

// Identify the animal
void Animal::who() const {
  cout << "\nMy name is " << name << " and I weigh " << weight << "lbs.";
}

class Lion: public Animal {
  public:
    Lion(string theName, int wt):Animal(theName, wt){}
};

class Aardvark: public Animal {
  public:
    Aardvark(string theName, int wt):Animal(theName, wt){}
};

int main() {
  Lion myLion("Leo", 400);
  Aardvark myAardvark("Algernon", 50);
  myLion.who();
  myAardvark.who();
  cout << endl;
  return 0;
}