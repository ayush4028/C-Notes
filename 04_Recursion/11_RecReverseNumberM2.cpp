#include<bits/stdc++.h>
using namespace std;
int helper(int n, int dig)
{
    if(n % 10 == n)
    {
        return n;
    }
    int rem = n % 10;
    return rem * pow(10, dig - 1) + helper(n/10, dig - 1);
}
int Reverse(int n)
{
    int dig = log10(n) + 1;
    return helper(n, dig);
}
int main() {
    int n;
    cin >> n;

    cout << Reverse(n);

    return 0;
}