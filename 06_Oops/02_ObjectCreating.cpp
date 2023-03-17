#include<bits/stdc++.h>
#include "Student.cpp"
using namespace std;

int main() {
    // Create object statically
    Student s1;
    Student s2;
    
    Student s3 , s4 , s5;
    // If I want to make an object and put properties like age and Rollno into it then 
    s1.age = 24;
    s1.RollNo = 101;

    cout << s1.getAge() << endl;
    cout << s1.RollNo << endl;

    s1.display();
    s2.display();


    s2.age = 33;
    
    
    // Create objects Dynamically
    Student *s6 = new Student;

    (*s6).age = 23;
    (*s6).RollNo = 104;

    (*s6).display();


    // There is one more method of writing this thing 
    s6 -> age = 23;
    s6 -> RollNo = 104;
    s6 -> display();


    return 0;
}