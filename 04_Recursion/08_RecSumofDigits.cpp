#include<bits/stdc++.h>
using namespace std;
int SumofDigits(int n)
{
    if(n == 0)
    {
        return 0;
    }
    int temp = n % 10;
    n = n/10;

    return temp + SumofDigits(n);
}
int main() {
    int n;
    cin >> n;

    cout << SumofDigits(n);

    return 0;
}