//? we can make another class for product as
//!
//TODO 

/*

Syntax to make a class

        class classname{
           xyz;
       };
*/
/*

class Product{
    int price;
    int weight;
   char name[100];
};

*/
class Student{
    public:

    int RollNo;

    // Now if I want to make my RollNo public but age private then 

    private:
    int age;


    public :
    void display(){
        cout << age << " " << RollNo << endl;
    }

    int getAge(){
        return age;
    }


};




 
