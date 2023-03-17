#include<bits/stdc++.h>
using namespace std;

int sum(int a[] , int size) // if we use an array ina a function we use the array as a pointer only 
{
    cout << sizeof(a) << endl;
    return 0;
}
int main() {
    int a[10];
    cout << sizeof(a) << endl;
    cout << sum(a , 10) << endl;
    return 0;
}