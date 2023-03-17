#include<bits/stdc++.h>
using namespace std;
int main() {
    int a[10];
    // address of the zeroth element in an array is equal to the adress of the array
    cout << a << endl;
    cout << &a << endl;
    
    a[0] = 5;
    a[1] = 10;

    // value of a[0] can be asked by 
    cout << *a << endl;
    // value of the next element i.e a[1] can be asked by 
    cout << *(a+1) << endl;
    // also it can asked by 
    cout << *(1+a) << endl;

    // Now suppose we make a pointer p
    int *p = &a[0];
    cout << a << endl;      // This stores address of array i.e address of a[0] 
    cout << p << endl;      //   This also stores the address of a only

    cout << &a << endl;     // This stores address of array i.e address of a[0] 
    cout << &p << endl;     // This prints the address of the pointer 

    cout << sizeof(p) << endl; // 4 bytes
    cout << sizeof(a) << endl; // 40 bytes

    return 0;
}