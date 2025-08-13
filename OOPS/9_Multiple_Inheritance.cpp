#include<iostream>
#include<string>
using namespace std;

class Parent1{
public:
    Parent1(){
        cout<<"I am Parent_1 class"<<endl;
    }
};

class Parent2{
public:
    Parent2(){
        cout<<"I am Parent_2 class"<<endl;
    }
};

class Child : public Parent1 , public Parent2{
public:
    Child(){
        cout<<"I am Child class"<<endl; 
    }
};

int main(){
    Child Abhay;

}