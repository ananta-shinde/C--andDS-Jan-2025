#include<iostream>
using namespace std;

class Student{
    private :
     int rollNo;
     string name;
     string department;
     void setRollNo(int value){
        rollNo = value;
     }
     public:
     
     // default constructor
     Student(){
        rollNo = 000;
     }
   
     // parsmeterized constructor
     Student(int value){
        rollNo = value;
     }

     int getRollNo(){
        return rollNo;
     }

};

int main(int argc, char const *argv[])
{
    Student s1,s2(250);
    // s1.rollNo = 40;
    // s1.rollNo = 500;
    // s1.name = "Ananta";

    cout<< s1.getRollNo()<<endl;
    cout<< s2.getRollNo();
    return 0;
}

