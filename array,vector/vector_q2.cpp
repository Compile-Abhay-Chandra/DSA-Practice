//difference of elements at odd place and even place
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    for (int i=1; i<=v.size(); i++){
       cin>>v[i];
    }
    for (int i=1; i<=v.size();i++){
       cout<<v[i]<<" ";
    }
    cout<<endl;
    int a=0;
    int b=0;
   for(int i=0;i<=v.size();i++){
    if(v[i]%2==0){
        a=a+v[i];
    }
    else b=b+v[i];
   }
   cout<<b-a;
}