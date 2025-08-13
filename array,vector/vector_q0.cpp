#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;                                                       //declaration
    int n=10;
    cout<<"SIZE:"<<v.size()<<endl;                                      //tells size
    cout<<"CAPACITY"<<v.capacity()<<endl;                               //tells capacity
    for(int i=0;i<n;i++){
        v.push_back(i);
    cout<<"SIZE:"<<v.size()<<endl;
    cout<<"CAPACITY"<<v.capacity()<<endl;
    }
     for(int k=0;k<v.size();k++){                                       //prining values
        cout<<v[k]<<" ";
    }
    cout<<endl;
    v.pop_back();                                                       //delete last element
    cout<<"SIZE:"<<v.size()<<endl;
    cout<<"CAPACITY"<<v.capacity()<<endl;
    for(int j=0;j<v.size();j++){
        cout<<v[j]<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+2,10);                                           //insert 2nd term from beginig
    for(int a=0;a<v.size();a++){
        cout<<v[a]<<" ";
    }
    cout<<endl;
    v.erase(v.end()-4);                                                 //erase 4th term from back
    for(int b=0;b<v.size();b++){
        cout<<v[b]<<" ";
    }
}
