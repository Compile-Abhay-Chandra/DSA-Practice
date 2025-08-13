                            //shifting an array without creating a new array
#include<iostream>
#include<vector>
#include<algorithm>         //***for woking of reverse function***
using namespace std;
int main(){
    vector<int>v={0,1,2,3,4,5,6,7,8,9};
  
   int a;cout<<"enter the number";cin>>a;       //taking input
   a=a%v.size();

   reverse(v.begin(),v.end());
   reverse(v.begin()+a,v.end());
   reverse(v.begin(),v.begin()+a-1);
   for(int i=0;i<v.size();i++){
    cout<<v[i];
   }
}
