// prefix sum
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void psum(vector<int> &v){
for(int i=1;i<v.size();i++){
    v[i]=v[i]+v[i-1];
}
return;
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
    psum(v);
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
}
