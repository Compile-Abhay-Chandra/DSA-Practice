// sum of all digits of a given number 
#include<iostream>
#include<vector>
using namespace std;
int SUM(int a){
    if(0<=a and a<10){return a;}
    return SUM(a/10)+(a%10);
}
int main(){
    int a;
    cout<<"Enter the number: ";cin>>a;
    // SUM(a);
    cout<<SUM(a);
}