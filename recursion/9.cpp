// printing multiples of a number using recursion.
#include<iostream>
using namespace std;
void F(int a,int b){
    if(b<1){
        return;
    }
    F(a,b-1);
    cout<<a*b<<" ";
}
int main(){
    int a=3;
    int b=10;
    F(a,b);
}