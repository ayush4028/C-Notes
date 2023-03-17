#include<bits/stdc++.h>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverse(char name[] , int n)
{
    int s = 0;
    int e = n - 1;

    while(s<e)
    {
        swap(name[s] , name[e]);
        s++;
        e--;
    }
}

bool checkPalindrome(char name[] , int n)
{
    int s = 0;
    int e = n - 1;

    while(s < e)
    {
        if(name[s] != name[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
char toLower(char name)
{
    if(name >= 'a' && name <= 'z')
    {
        return name;
    }
    else
    {
        char temp = name - 'A' + 'a';
        return temp;
    }
}

int main()
{
    char name[20];              // Declaration of char array

    cout<<"Enter your name "<<endl;     
    cin >> name;
       //  name[2] = '\0';        // Enter the space 

    cout<<"Your name is ";
    cout<<name<<endl;

    int n = getLength(name);
    cout<<"Length: "<<getLength(name)<<endl;        // Function to find the length of a char array.

    reverse(name,n);

    cout << "Your  reverse name is ";
    cout << name << endl;

   cout << "Palindrome or Not "  << checkPalindrome( name , n) << endl;

   cout << "Lower case of the given string is" << toLower('n') << endl;
   cout << "Lower case of the given string is" << toLower('N') << endl;

    
    return 0;
}