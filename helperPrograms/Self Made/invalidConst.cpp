#include <iostream>

using namespace std;
class Word
{
public:
    Word()
    {
        std::cout << "ctor of Word\n";
    }

    Word(const int f)
    {
        frequency = f;
    }

    //Type conversion
    /* Word(const char *s) {
        frequency = 1;
        str = new char [strlen(s) + 1]; strcpy(str, s);
    }

    void printString() {
        cout<<str<<endl;
    }*/

private:
    int frequency = 1;
    char *str;
};

int main(int argc, char *argv[])
{
    // value of movie.frequency?
    Word movie;

    //Word movie();

    // value of song.frequency?
    Word song(10);

    /* Word *p = new Word("King Kong");
    p->printString(); */
    return 0;
}
