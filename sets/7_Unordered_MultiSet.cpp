// allow duplicate element
// elements are not ordered
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_multiset<int> Set;
    Set.insert(1);
    Set.insert(4);
    Set.insert(1);
    Set.insert(4);
    Set.insert(2);
    for(auto i: Set){
        cout<<i<<" ";
    }
}