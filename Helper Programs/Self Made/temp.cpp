#include<iostream>

using namespace std;
int getRandomValue();
double getRandomValue();

int main() {
    const int a = 10;
    const int* ptr = &a;  // ptr is a pointer to constant int 
    *ptr = 5; // wrong
    ptr++;    // right

    int * const newPtr;   // newPtr is a constant pointer to int
    int b = 10;
    int *const ptr = &b;  
    *newPtr = 5; // right
    newPtr++;    // wrong

    return 0;
}
