#include<iostream>
#include<vector>
using namespace std;

void scan(vector<int> &arr, int n) {
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void print(vector<int> &arr) {
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> merge(vector<int> &arr1, vector<int> &arr2) {
    int i = 0, j = 0;
    int n = arr1.size();
    int m = arr2.size();

    vector<int> ans;

    while(i < n && j < m)
    {
        if(arr1[i] < arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
        }
        else
        {
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while(i < n)
    {
        ans.push_back(arr1[i]);
        i++;
    }

    while(j < m)
    {
        ans.push_back(arr2[j]);
        j++;
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;
    

    vector<int> arr1(n);
    scan(arr1, n);

    int m;
    cin>>m;
    vector<int> arr2(m);
    scan(arr2, m);

    
    print(arr1);
    print(arr2);

    vector<int> arr3 = merge(arr1, arr2);

    print(arr3);
    
    return 0;
}