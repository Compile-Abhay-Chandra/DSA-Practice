//find if the array contain a partision so that the prefix sum = suffix sum 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool _partition(vector<int> &v){
    bool a;
    for(int i=1;i<v.size();i++){
        v[i]=v[i]+v[i-1];
        for(int j=i+1;j<v.size();j++){
            v[j]=v[j]+v[j];
            if(v[i]==v[j]){
                return true;
            }
        }
    }
    return false;
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
cout<<_partition(v);
}
