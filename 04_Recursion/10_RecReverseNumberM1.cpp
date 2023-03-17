#include<bits/stdc++.h>
using namespace std;
int sum = 0;
int Reverse(int n)
{  
    if(n == 0)
    {
        return sum;
    }
    int rem = n % 10;
    sum = sum * 10 + rem;
    Reverse(n/10);
}

bool palindrome(int n, int rev)
{
    if(n == rev)
    {
        return rev;
    }
}

int main() {
    int n;
    cin >> n;
    
    int rev =  Reverse(n);
    cout << rev << endl;
    if(rev == n)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}