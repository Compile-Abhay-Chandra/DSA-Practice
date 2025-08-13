//find the last occurance of an element x in a vecor 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<=v.size();i++){
        cout<<"enter the number:";
         cin>>v[i];
         cout<<endl;
    }
    cout<<"enter the value: ";
    int x;
    cin>>x;
    int store=0;
    for(int j=0;j<=v.size();j++){
        if (v[j]==x) store=j;
    }
    cout<<store;
}

