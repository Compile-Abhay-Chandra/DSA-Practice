// square the element and sort them in decending order
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void square(vector<int> &v){
    for(int i=0;i<v.size();i++){
        v[i]=v[i]*v[i];
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
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
    square(v);
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
}
