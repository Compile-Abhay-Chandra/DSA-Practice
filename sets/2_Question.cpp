#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    set<string> InviteList;
    int n;
    cin>>n;

    while (n--)
    {
        string names;
        cin>>names;

        InviteList.insert(names);
    }

    for (auto name : InviteList)
    {
        cout<<name<<" ";
    }
    
    
}