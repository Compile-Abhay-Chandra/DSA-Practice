#include<iostream>
#include<cmath>
using namespace std;
int Armstrong_Number(int x,int y){
    if (x==0) return 0;
    return pow(x%10,y) + Armstrong_Number(x/10,y);
}
int main(){ 
    int a,b,c;
    a=153;


    int Len=0;
    int temp = a;
    while (temp>0){
        temp = temp/10;
        Len++;
    }

    
    b=Armstrong_Number(a,Len);
    if (a==b){
        cout<<"Yes";
    }
    else{
        cout<<"No";
}
}