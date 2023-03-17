#include<bits/stdc++.h>
using namespace std;
void print(int *p)
{
    cout << *p << endl;
}

void IncrementFunctions(int *p)
{
    p = p + 1;
    cout << p << endl;
}
void increment(int *p)
{
    (*p)++;
}
int main() {
    int i =10;
    int *p = &i;
    print(p);

    cout << p << endl;
    IncrementFunctions(p);
    cout << p << endl;

    cout << *p << endl;
    increment(p);
    cout << *p << endl;

    // Now let's see hoe functions in array works
    


    return 0;
}