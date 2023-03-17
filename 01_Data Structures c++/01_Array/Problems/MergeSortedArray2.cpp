#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> arr1, vector<int> arr2, vector<int> &arr3) {
    int i = 0;
    int j = 0;

    int n = arr1.size();
    int m = arr2.size();

    while(i < n || j < m)
    {
        if(i < n && j < m)
        {
            if(arr1[i] < arr2[j])
            {
                arr3.push_back(arr1[i++]);
            }
            else
            {
                arr3.push_back(arr2[j++]);
            }
        }
        else if(i < n)
        {
            arr3.push_back(arr1[i++]);
        }
        else
        {
            arr3.push_back(arr2[j++]);
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr1(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    vector<int> arr2(m);
    for(int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }

    vector<int> arr3;
    merge(arr1, arr2, arr3);

    for(int i = 0; i < arr3.size(); i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}