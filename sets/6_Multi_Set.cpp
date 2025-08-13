// can store duplicate values.
// is ordered.
#include<iostream>
#include<set>
using namespace std;
int main(){
    multiset<int> Set;
    Set.insert(1);
    Set.insert(4);
    Set.insert(1);
    Set.insert(4);
    Set.insert(2);
    for(auto i: Set){
        cout<<i<<" ";
    }
}