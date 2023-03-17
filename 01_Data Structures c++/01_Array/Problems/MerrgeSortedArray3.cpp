#include<iostream>
using namespace std;

void merge(int arr1[], int m, int arr2[], int n, int arr3[]) {
    int i=0;
    int j=0;
    int k=0;
    while(i < m && j < n)
    {
        if(arr1[i]<arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while(i<m)
    {
        arr3[k++] = arr1[i++];
    }
    while(j<n)
    {
        arr3[k++] = arr2[j++];
    }
}

int main()
{
    int m;
    cin >> m;

    int arr1[m];
    for(int i = 0;i < m; i++)
    {
        cin >> arr1[i];
    }

    int n;
    cin >> n;

    int arr2[n];
    for(int j=0;j<n;j++)
    {
        cin >> arr2[j];
    }
    
    int k = m + n;
    int arr3[k] = {0};
    merge(arr1, m, arr2 ,n, arr3);

    for(int i=0;i<k;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    return 0;
}