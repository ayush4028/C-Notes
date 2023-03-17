#include<bits/stdc++.h>
using namespace std;
int main() {
    // if we want to find the address of i 
    int i = 10;
    cout << &i << endl;

    // if we want to store this adress of i somewhere then we can store it in a pointer 
    int *p = &i;
    cout << p << endl;

    // if i want to print the value of p i.e 10 
    cout << *p << endl;

    // if we want to know the size of the pointer that how much space it covers i.e 4 bytes 
    cout << sizeof (p) << endl;

    // now if we want to the address in different datatypes

    float f = 10.2;
    float *pf = &f;
    cout << pf << endl;

    cout << sizeof (pf) <<endl;

    double d = 2738388;
    double *pd = &d;
    cout << pd << endl;

    cout << sizeof(pd) << endl;

    return 0;
}