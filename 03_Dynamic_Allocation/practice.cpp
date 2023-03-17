#include<bits/stdc++.h>
using namespace std;
int lastIndex(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
  if(size == 0)
  {
    return -1;
  }
  if(input[size] == x)
  {
    return size;
  }

  return lastIndex(input, size - 1, x);
}
int main() {
    int size , x;
    cin >> size >> x;

    int arr[size];
    for(int i=0; i<size; i++)
    {
        cin >> arr[i];
    }
    
    cout << lastIndex(arr , size , x);

    return 0;
}