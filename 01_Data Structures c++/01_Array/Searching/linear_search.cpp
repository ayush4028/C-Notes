#include<iostream>
using namespace std;

int linearSearch(int n , int arr[] ,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]== key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of of arry:"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int key;
    cout<<"Enter the key: "<<endl;
    cin>>key;

    cout<<linearSearch(n, arr,key);

    return 0;
}