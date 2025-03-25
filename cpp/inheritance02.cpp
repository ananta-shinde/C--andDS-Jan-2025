#include<iostream>
using namespace std;
class BaseClass{
    int count;

    public:
    // constructor
    BaseClass(){
       count = 0;
    }

    int getCount(){
        return count;
    }

    void setCount(int value){
        count = value;
    }

   virtual void display(){
        cout << "display baseclass data"<< endl;
    }

};

class ChildClass02 :public BaseClass{

};

class ChildClass01:public BaseClass{
    
    public :
    void display(){
        cout << "display childclass data"<<endl;
    }

    void display(int data){
        cout << "Data :" <<data<<endl;
    }
};
int main(int argc, char const *argv[])
{
    BaseClass base;
    base.display();
    ChildClass01 child1;
    child1.display(100);
    ChildClass02 child2;
    child2.display();
    BaseClass *ptr = &base;
    ptr->display();
    ptr = &child1;
    ptr->display();
    return 0;
}
