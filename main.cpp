// Your First C++ Program
using namespace std;
#include <iostream>

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle() {
            length=breadth=1;
            } // default constructor
        Rectangle(int l, int b); // parametrized constructor
        int area(); 
        int perimeter();
};

// parameterized constructor
Rectangle::Rectangle(int l, int b){
    length = l;
    breadth = b;
}

Rectangle::area(){
    int area  = length*breadth;
    cout<<"area of rectangle is:\n\r"<<area;
     return 0;
}

Rectangle::perimeter(){
    int perimeter = 2*(length+breadth);
    cout<<"perimeter of rectangle is:\n\r"<<perimeter;
    return 0;
}

int main() {
    Rectangle r(10,5);
    cout<<"Hello world\n\r";
    cout << r.area();
    cout << r.perimeter();
    return 0;
}