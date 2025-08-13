// Find the gcd of two numbers using recursion
#include<iostream>
using namespace std;
int gcd(int a,int b){
    if (b>a) return gcd(b,a);
    if (b==0) return a;
    gcd(b,a%b);
}
int main(){
    int a,b;
    cout<<"Enter the number 1: ";
    cin>>a;
    cout<<"Enter the number 1: ";
    cin>>b;
    cout<<gcd(a,b);

}