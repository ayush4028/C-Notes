#include<bits/stdc++.h>
using namespace std;
int prod(int n)
{
    if(n%10 == n)
    {
        return n;
    }
    int temp = n % 10;
         n = n / 10;

    return temp * prod(n);
}
int main() {
    int n;
    cin >> n;

    cout << prod(n);
    return 0;
}