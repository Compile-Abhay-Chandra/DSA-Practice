#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    Parent(){
        cout<<"I am Parent class"<<endl;
    }
};

class Child1 : public Parent{
public:
    Child1(){
        cout<<"I am Child_1 class"<<endl;
    }
};

class Child2 : public Parent{
public:
    Child2(){
        cout<<"I am Child_2 class"<<endl; 
    }
};

int main(){
    Child1 Abhay;
    Child2 Chandra;

}