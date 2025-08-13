// print the sum of an array by taking an query
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Sum(vector<int> &v,int a , int b){
    int x=0;
    for(int i=a;i<=b;i++){
        x=x+v[i];
    }
    cout<<x;
}
int main(){
     int size;
    cout<<"enter the size: ";
    cin>>size;
    vector<int>v(size);
    for(int i=0 ; i<size; i++){
        int a;
        cout<<"enter the numbers: ";
        cin>>a;
        v[i]=a;
    }
    int a,b;
    cout<<"enter the query 1: ";cin>>a;
    cout<<"enter the query 2: ";cin>>b;
    a=a-1;
    b=b-1;
    Sum(v,a,b);
}
