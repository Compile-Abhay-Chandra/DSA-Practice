// a destructor does not take any argument and does not return anything
#include<iostream>
#include<string>
using namespace std;

class Rectangle{
public:
    int length;
    int breadth;

    Rectangle(/*empty*/){ //default constructor -> no argument passed
        length = 0;
        breadth = 0;
    }

    Rectangle(int x , int y){ // parametrised constructor -> argument passed
        length = x;
        breadth = y;
    }

    Rectangle(Rectangle &r){ // copy constructor -> initialise an abject by another existing object
        length = r.length;
        breadth = r.breadth;
    }
    ~Rectangle(){  // destructor
        cout<<"Destructor is called!!"<<endl;
    }
};

int main(){

    Rectangle *R1 = new Rectangle();
    cout<<R1->length<<"--"<<R1->breadth<<endl;  // using default constructor
    delete R1;

    Rectangle R2(4,5);
    cout<<R2.length<<"--"<<R2.breadth<<endl; // using parametrised constructor

    Rectangle R3 = R2;
    cout<<R3.length<<"--"<<R3.breadth<<endl; // using copy constructor

}