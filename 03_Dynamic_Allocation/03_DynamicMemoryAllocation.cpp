#include<bits/stdc++.h>
using namespace std;
int main() {
int *p = new int;   /* To store the data in a big memory we use a dynamic memory allocation in a Heap memory and for that we write
                            new int instead of int and we store that given address of a data into a pointer.  */
                        // Here the address of data is stored in a heap memory and the address of the pointer is stored in a stack memory
    
int n;
cout << "Enter the size of an array: " << endl;
cin >> n;    
int *pa2 = new int[n];
cout << "Enter the elements of array:" << endl;
for(int i=0; i<n; i++)
{
    cin >> pa2[i];
}

int mx = INT_MIN;
for(int i=0; i<n; i++)
{
    if(pa2[i] > mx)
    {
        mx = pa2[i];
    }
}

cout << "The maximum element of the array is:" << mx << endl;

while(true){
    int *px = new int;
    delete p;      // In case of a single element if we want to delete an element we use this

    int *pa = new int[50];
    delete [] pa; // In case we want to delete an array we can delete in 
}
    return 0;
}