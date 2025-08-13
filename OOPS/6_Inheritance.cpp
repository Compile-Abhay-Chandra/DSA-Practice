#include<iostream>
#include<string>
using namespace std;

class Parent{

    public:
    int x;

    protected:
    int y;

    private:
    int z;
};

class Child1 : public Parent{
/*
    x will remain public
    y will remain protected 
    z will not be accessible

*/
};
class Child2 : protected Parent{
/*
    x will become protected
    y will become protected 
    z will not be accessible

*/
};
class Child3 : private Parent{
/*
    x will become private
    y will become private 
    z will not be accessible

*/
};

int main(){
//     x will be accessible
//     y will not be accessible 
//     z will not be accessible
}