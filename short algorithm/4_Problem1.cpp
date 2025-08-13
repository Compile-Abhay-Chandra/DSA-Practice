//sorting zeroes(at the end) and non zeroes withount changing the relative ordering 
#include<iostream>
#include<vector>
using namespace std;
void Sort(vector<int> &v){
    for (int i=0;i<v.size();i++){
        bool flag=true;
        for (int j=0;j<v.size()-i-1;j++){
            if( (v[j]==0)  && v[j]<v[j+1]){
                swap(v[j+1],v[j]);
            }
        if(!flag) break;
        }
    }
}
int main(){
    int a;
    cin>>a;
    vector<int> v(a);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    Sort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}