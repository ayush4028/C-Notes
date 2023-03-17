#include<bits/stdc++.h>
using namespace std;
int power(int x ,int n)
{
    if(x == 0)
    {
        return 1;
    }
    int output = x * pow(x , n-1);
    return output;
}
int main() {
    int x,n;
    cin >> x >> n;
    int ans = power(x,n);
    cout << ans << endl;
    return 0;
}