// class is also known as absraction data type (ADT)
#include<iostream>
#include<string>
using namespace std;

class Fruit{
public:
    string name;
    string color;

};

int main(){
    Fruit apple;                // 1 st methord to define object;
    apple.name = "Apple";
    apple.color = "Red";
    cout<<apple.name<<"__"<<apple.color<<endl;

    Fruit *banana = new Fruit();    // 2nd methord to define object; 
    banana-> name = "Banana";
    banana -> color = "Yellow";
    cout<<banana->name<<"__"<<banana->color<<endl;

}