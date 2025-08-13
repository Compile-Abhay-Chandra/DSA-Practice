// print all the numbers till n using recursion
#include<iostream>
using namespace std;
int F(int a){
    if(a<1){
        return 0;
    }
    F(a-1);
    cout<<a<<" ";
}
int main(){
    int a;
    cin>>a;
    F(a);
}