#include<bits/stdc++.h>
using namespace std;
bool IsSorted(int arr[] , int n)
{
    if(n == 0 || n == 1)
    {
        return true;
    }
    if(arr[0] > arr[1])
    {
        return false;
    }
    bool  disco = IsSorted(arr + 1, n - 1);
    if(disco)
    {
        return true;
    }
    else{
        return false;
    }

}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cout << IsSorted(arr , n);

    return 0;
}