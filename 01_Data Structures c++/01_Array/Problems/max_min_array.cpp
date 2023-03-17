#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int mn_value = arr[0];
    int mx_value = arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]<mn_value)
        {
            mn_value = arr[i];
        }
        if(arr[i]>mx_value)
        {
            mx_value = arr[i];
        }
    }

    cout<<"Maximum value is: "<<mx_value<<endl;
    cout<<"Minimum value is: "<<mn_value<<endl;

return 0;
}