#include<iostream>
using namespace std;

class Shape{
    public:
    void area(){
        cout << "Area should be calculated....";
    }
};
class Rectangle : public Shape{
    private:
    int width;
    int height;
    public:
    int getWidth(){
        return width;
    }

    void setWidth(int value){
        width = value;
    }

    int getHeight(){
        return height;
    }

    void setHeight(int value){
        height = value;
    }

};

class Circle: Shape{
    int radius;
    public:
    int getRadius(){
        return radius;
    }
    void setRadius(int value){
        radius = value;
    }
};
int main(int argc, char const *argv[])
{
    Rectangle r;
    Circle c;
    r.area();
   
    return 0;
}
