#include<iostream>
#include<string>
using namespace std;
class Parent1{
public: 
    Parent1(){
        cout<<"I am Parent1"<<endl;
    }
};
class Child : public Parent1{
public: 
    Child(){
        cout<<"I am Child"<<endl;
    }
};
class GrandChild : public Child{
public: 
    GrandChild(){
        cout<<"I am GrandChild"<<endl;
    }
};
int main(){
    GrandChild x;
}