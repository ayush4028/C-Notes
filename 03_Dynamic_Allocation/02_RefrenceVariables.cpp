#include<bits/stdc++.h>
using namespace std;

void increment(int & n)
{
  n++;
}
int main() {
    int i= 10;
    /*Here 
    int i;
    i=10;          This can be done */
    
    int &j = i;     // for using the j as raference variable or to make j as if we change i then j can also be changed we use & before j
    //Here 
    //int &j;
   // j = i;  This cannot be done 
    i++;
    cout << j << endl;
    int &k = j;
    j++;
    cout << k << endl;
    cout << i << endl;
    cout << j << endl;

    increment(i);
    cout << i << endl;
    

    return 0;
}