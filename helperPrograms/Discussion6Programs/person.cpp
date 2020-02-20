#include <iostream>
#include <string>

using namespace std;

class Person {
  public:
    Person():age(0), name(""), gender('f'){}            // Default constructor
    Person(int theAge, string theName, char theGender);
    void who() const;                                   // Display details

  protected:
    int age;                                            // Age in years
    string name;
    char gender;                                        // 'm' or 'f'
};

Person::Person(int theAge, string theName, char theGender): age(theAge), 
                                              name(theName), gender(theGender) {
  
}

// Display details of Person object
void Person::who() const {
  cout << "\nThis is " << name << " who is " << age << " years old.";
}

class Employee: public Person {
  public:
    Employee(){}                 // Default constructor - necessary to declare arrays
    Employee(int theAge, string theName, char theGender, long persNum):
        Person(theAge, theName, theGender), personnelNumber(persNum){}
    void who() const;    // Display details

  protected:
    long personnelNumber;

};

// Display details of Employee object
void Employee::who() const {
  cout << endl 
       << name << " is a " << (gender=='f'? "female": "male") 
       << " employee aged " << age << "."; 
}

class Executive: public Employee {
  public:
    Executive(){}               // Default constructor - necessary to declare arrays
    Executive(int theAge, string theName, char theGender, long persNum):
        Employee(theAge, theName, theGender, persNum){}
    void who() const;           // Display details
};

// Display details of Executive object
void Executive::who() const {
  cout << endl 
       << name << " is a " << (gender=='f'? "female": "male") << " executive."; 
}

int main() {
  Employee employees[5];
  employees[0] = Employee(21, "Alpha A", 'm', 34567);
  employees[1] = Employee(32, "Beta B", 'f', 34578);
  employees[2] = Employee(46, "Gamma G", 'm', 34589);
  employees[3] = Employee(37, "Delta D", 'f', 34598);
  employees[4] = Employee(65, "Zeta Z", 'm', 34667);

  for(int i = 0 ; i<sizeof(employees)/sizeof(Employee) ; i++)
    employees[i].who();

  Executive executives[5];
  executives[0] = Executive(44, "Pink Floyd", 'm', 35567);
  executives[1] = Executive(32, "Dire Straits", 'f', 35578);
  executives[2] = Executive(42, "The Beatles", 'm', 35589);
  executives[3] = Executive(33, "Green Day", 'f', 35598);
  executives[4] = Executive(29, "Linkin Park", 'f', 35667);

  for(int i = 0 ; i<sizeof(executives)/sizeof(Executive) ; i++) {
    executives[i].who();
    executives[i].Employee::who();
  }
  cout << endl;

  return 0;
}