/*STL of Vector*/
// Vector is a dynamic array
#include<iostream>
#include<vector>            // this is the header file to use vector
using namespace std;

int main()
{
    vector<int> v;         // Declaration 
           
           
    cout<<"Size is -> "<< v.capacity()<<endl;   // To check the capacity of the vector
    cout<<"Size is -> "<< v.size()<<endl;       // To check the size of vector (Initial size of vector is 0 )

    //To push an element in a vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    
    //To find the element at any position
    cout<<"Element at 2nd Index: "<<v.at(2)<<endl;

    //To find the front and back element of a vector
    cout<<"First Element: "<<v.front()<<endl;
    cout<<"Last Element: "<<v.back()<<endl;


    // To pop_back or remove  the elements in a vector
    cout<<"Before pop: "<<endl;
    for(int i:v)
    {
        cout<<i<<endl;
    }

    v.pop_back();

    cout<<"After pop: "<<endl;
     for(int i:v)
    {
        cout<<i<<endl;
    }


    // To clear the elements of the vector
    cout<<"Before clear size: "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size: "<<v.size()<<endl;

    //If I have the size of the vector then we can use like
    vector<int> a(5,1);
     cout<<"Print : "<<endl;
     for(int i:a)
    {
        cout<<i<<" ";
    }
    


}