#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    Parent(){
        cout<<"I am Parent class"<<endl;
    }
};

class Child : public Parent{
public:
    Child(){
        cout<<"I am Child class"<<endl;
    }
};

int main(){
    Child Abhay;

}