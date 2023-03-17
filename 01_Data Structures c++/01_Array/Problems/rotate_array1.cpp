#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the positions you want to rotate: "<<endl;
    cin>>k;

    int m;
    m=n;

    int temp[m];

    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n] = arr[i];

    }

   

    for(int i=0;i<n;i++)
    {
        cout<<temp[i]<<" ";
    }

    return 0;
}