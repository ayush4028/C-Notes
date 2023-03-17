#include <bits/stdc++.h>
using namespace std;

#define yes         cout << "YES" << endl
#define no          cout << "NO" << endl
#define ll          long long int

#define fast        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

void online_judge() {
    #ifndef online_judge
        freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    #endif
}

void solve() {      // Change the funtion-type according to funtion-call
    
    // Write your code here
    
}

int main() {
    online_judge();         // For input-output from txt-files
    // fast;                   // for Fast input-output

    int tc;
    cin >> tc;   // If you want no TestCase, comment this line

    for(int i = 1; i <= tc; i++) {
        // cout << "Case #" << i << ": ";   // For Google KickStart
        solve();

        // if(solve()) {    // For Yes-No problems, use this
        //     yes;
        // }
        // else {
        //     no;
        // }
    }
}