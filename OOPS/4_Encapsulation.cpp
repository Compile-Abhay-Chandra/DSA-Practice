// property of OOPs -> binding of methords & variable together into a single unit -> (class)
// data is only accesible from the class methord
//also leads to data abstraction
#include<iostream>
#include<string>
using namespace std;

class ABC{
    int x;
    
public:

    void set(int n){
        x=n;
    }
    int get(){
        return x;
    }


};

int main(){

    ABC object;
    object.set(5);
    cout<<object.get();

}