// We suppose have an array of size 3 
// Then we use array like: int arr[3]= {1,2,3}
// Now if we have to use array in stl we write 
#include<iostream>
#include<array>
using namespace std; 

int main()
{
    // array<data_type,size of array> name of array = {1,2,3,...}
    array<int,4> a = {1,2,3,4};


    int size = a.size();        // for finding the size of array
    for(int i=0; i<size;i++)
    {
        cout<< a[i] <<endl;
    }


    // if we have to find any element in an array                       /* All these operations happen in O(1) time complexity */                      
    // cout<<"Element at 2nd Index -> "<< array_name.at(size of array)<<endl;
    cout<<"Element at 2nd Index -> "<< a.at(2)<<endl;


    //To find wheather the array is empty or not if array is empty print 0 else print 1
    // cout<<"Empty or not -> "<< array_name.empty() <<endl;
    cout<<"Empty or not -> "<< a.empty()<<endl;


    // How to find the first and the last element of an array
    cout<<"First element is: "<< a.front()<<endl;
    cout<<"Last element is: "<< a.back()<<endl;


    // If we want to sort an array in increasing order 
    // sort(arr,arr+n); where n is the size of array


    //If we want to find maximum or minumum element in an array
    // maximum ->   *max_element(arr,arr+n);
    // minimum  ->  *min_element(arr,arr+n);

    

}