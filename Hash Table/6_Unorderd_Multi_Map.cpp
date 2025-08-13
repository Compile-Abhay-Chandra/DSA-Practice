#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_multimap<string,int> List;
    List.insert(make_pair("Apple",1));
    List.insert(make_pair("Banana",2));
    List.insert(make_pair("Apple",3));
    List.insert(make_pair("Banana",4));
    List.insert(make_pair("Mango",5));

    for(auto pair:List){
        cout<<"Name-> "<<pair.first<<endl;
        cout<<"Number-> "<<pair.second<<endl;
    }
}