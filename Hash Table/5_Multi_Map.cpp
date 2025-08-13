#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<string,int> m;
    m.insert(make_pair("Abhay",1234));
    m.insert(make_pair("Raj",1234));
    m.insert(make_pair("Abhay",5678));
    m.insert(make_pair("Raj",5678));
    // m["raj"] = 89713;                   // Not allowed.

    for(auto pair:m){
        cout<<"Name-> "<<pair.first<<endl;
        cout<<"Phone no.-> "<<pair.second<<endl;
    }
    cout<<m.count("Abhay");
}