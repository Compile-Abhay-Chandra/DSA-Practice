#include<iostream>
#include<list>
using namespace std;

void display(list<int> &l){
    for(auto itr = l.begin(); itr != l.end(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;
}

void rdisplay(list<int> &l1){
    for(auto itr = l1.rbegin(); itr != l1.rend(); itr++){
        cout<<*itr<<" ";
    }cout<<endl;
}

int main(){
    list<int> l1 = {1,2,3,4,5};
    list<int> l2 = {1,2,2,2,3,4,5};

    // inserting element
    auto itr = l1.begin();                  // defining iterator
    advance(itr,2);                         // moving the iterator
    l1.insert(itr,5);                       // inserting 5 at itr
    display(l1);
    l1.insert(itr,2,6);                     // inserting 6 two times at itr
    display(l1);
    l1.insert(itr,l1.begin(),l1.end());     // inserting elements from l1.begin() to l1.end() at itr
    display(l1);

    // delete element
    cout<<"-------------------"<<endl;
    auto s_itr = l2.begin();
    auto e_itr = l2.begin();
    advance(s_itr,2);
    advance(e_itr,4);
    l2.erase(s_itr,e_itr);     // remove the elements from s_itr to e_itr-1;
    display(l2);

    // some extra function
    l2.push_front(0);
    l2.push_back(6);
    display(l2);
    l2.pop_front();
    l2.pop_back();
    display(l2);
}