#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main()
{

    // empty map container
    map<int, int> m;

    // insert elements in random order
    m.insert(pair<int, int>(1, 40));
    m.insert(pair<int, int>(2, 30));
    m.insert(pair<int, int>(3, 60));
    m.insert(pair<int, int>(4, 20));
    m.insert(pair<int, int>(5, 50));
    m.insert(pair<int, int>(6, 50));
    m.insert(pair<int, int>(7, 10));

    // printing map m
    map<int, int>::iterator itr;
    cout << "\nThe map m is : \n";
    cout << "\tKEY\tELEMENT\n";
    for (itr = m.begin(); itr != m.end(); ++itr)
    {
        cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    cout << endl;
    return 0;
}