// non member function which can be access private members of the class
//
#include<iostream>
using namespace std;
class Parent{
    int x = 18;

    friend void Print(Parent &object);  // Non-member function which can access private members of the class
};
void Print(Parent &object){
    cout<<object.x<<endl;
}
int main(){
    Parent Abhay;
    Print(Abhay);

}