// just a template
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
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
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
}
