#include<bits/stdc++.h>
using namespace std;
int main() {
    int i = 10;
    int *p = &i;            // Here we have declared a pointer and  saved the value of i in the pointer p 

    cout << p << endl;      // This is the address of p
    cout << *p << endl;     // This is the value of p

    int **p2 = &p;          //Here we have declared a second pointer and saved the address of the first pointer in the second pointer 
    cout << p2 << endl;     // Here we have just print the address of the second pointer 
    cout << *p2 << endl;    // Here we had shown the address of pointer p as *p2 is having the addresss of pointer p 
    cout << **p2 << endl;   // Here we have saved the value of the pointer whose address is saved in the pointer p

    return 0;
} 