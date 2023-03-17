#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    int temp = n % 10;
    n = n/10;

}
int main() {
    int n;
    cin >> n;

    cout << count(n);
    return 0;
}