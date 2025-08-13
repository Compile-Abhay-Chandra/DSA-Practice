#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    set<int> Set;
    vector<int> v = {2,34,7,8,3,2,5,89,5,2,45,73,56,84,2,5,7};
    for(auto i: v){
        Set.insert(i);
    }
    auto itr = Set.begin();
    itr++;

    cout<<*itr;
}