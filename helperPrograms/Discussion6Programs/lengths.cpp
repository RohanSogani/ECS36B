#include <iostream>
#include <string>
#include <cmath>
#include <typeinfo>
using namespace std;

class BaseLength {
  public:
    BaseLength():mm(0){}                                   // Default constructor
    BaseLength(long n):mm(n){}                             // Constructor from millimeters
    virtual double length();                               // Return the length

  protected:
    long mm;
    static double mmPerInch;
    static double mmPerMeter;
    static double inchesPerYard;
    static double yardsPerPerch;
};

class Inches: public BaseLength {
  public:
    Inches():BaseLength(){}
    Inches(double ins):BaseLength(static_cast<long>(0.5+mmPerInch*ins)){}
    double length();                                                 // Return the length
 };

class Meters: public BaseLength {
  public:
    Meters():BaseLength(){}
    Meters(double m):BaseLength(static_cast<long>(0.5+mmPerMeter*m)){}
    double length();                                                // Return the length
};

class Yards: public BaseLength {
  public:
    Yards():BaseLength(){}
    Yards(double yds):BaseLength(static_cast<long>(0.5+inchesPerYard*mmPerInch*yds)){}
    double length();                                                  // Return the length
};

class Perches: public BaseLength {
  public:
    Perches():BaseLength(){}
    Perches(double pch):BaseLength(static_cast<long>(0.5+yardsPerPerch*inchesPerYard*mmPerInch*pch)){}
    double length();                                                  // Return the length
};


// Read a length from the keyboard
BaseLength* readLength() {
  string units;                               // Stores the input string
  double value = 0.0;                         // Stores the length value

  for(;;)   {
    cout << "\nEnter a length:";
    cin >> std::skipws >> value;              // Skip whitespace and read the value
    getline(cin, units);                      // Rest of line is units
    int index = units.find_first_not_of(" "); // Find first non-blank in units

    switch(toupper(units[index])) {
      case 'M':
        return new Meters(value);
      case 'I':
        return new Inches(value);
      case 'Y':
        return new Yards(value);
      case 'P':
        return  new Perches(value);
      default:
      cout << "\nInvalid units. Re-enter length.";
      break;
    }
  }
}

double BaseLength::mmPerInch = 25.4;
double BaseLength::inchesPerYard = 36.0;
double BaseLength::mmPerMeter = 1000.0;
double BaseLength::yardsPerPerch = 5.5;

// Virtual base function to return the length
double BaseLength::length() {
  return static_cast<double>(mm);
}

// Virtual function to return the length
double Inches::length() {
  return mm/mmPerInch; 
}

// Virtual function to return the length
double Yards::length() {
  return mm/(inchesPerYard*mmPerInch); 
}

// Virtual function to return the length
double Meters::length() {
  return mm/mmPerMeter; 
}

// Virtual function to return the length
double Perches::length() {
  return mm/(yardsPerPerch*inchesPerYard*mmPerInch); 
}

int main() {
  const int nLengths = 5;
  BaseLength* pLengths[nLengths];
  cout << "\nYou can enter lengths in inches, meters, "
       << "\nyards, or perches. The first character "
       << "\nfollowing the number will determine the "
       << "\nunits, and can be i, m y or p."
       << "\ne.g. '22 ins' is 22 inches "
       << "\n'3.5 p' or '3.5perches' is 3.5 perches "
       << "\n'1y' is 1 yard."
       << endl
       << "\nPlease enter " << nLengths << " lengths now: "
       << endl;

  for(int i = 0 ; i<nLengths ; i++)
    pLengths[i] = readLength();

  // Output the lengths - we must figure out what type they are to display the units
  for(int i = 0 ; i<nLengths ; i++) {
    string units(" invalid type");
    if(typeid(*pLengths[i])==typeid(Inches))
      units = " inches";
    else if(typeid(*pLengths[i])==typeid(Meters))
      units = " meters";
    else if(typeid(*pLengths[i])==typeid(Yards))
      units = " yards";
    else if(typeid(*pLengths[i])==typeid(Perches))
      units = " perches";
    cout << "\nLength is " << pLengths[i]->length() << units 
         << " which is "   << pLengths[i]->BaseLength::length() << " millimeters.";
  }

  cout << endl;

  // Release memory for lengths
  for(int i = 0 ; i<nLengths ; i++)
    delete pLengths[i];

  return 0;
}