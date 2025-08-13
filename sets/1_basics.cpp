#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> set1;                        // used to store unique element in increasing order;
    // set<int,greater<int>> set1;             // used to store unique element in descending order;
    set1.insert(4);
    set1.insert(2);
    set1.insert(3);
    set1.insert(1);
    set1.insert(5);
    if(set1.find(3) != set1.end()){             // if the value is present it returns the position of the value else it returns the end of the set.
        cout<<"Value is present"<<endl;
    }else{
        cout<<"Value is not present"<<endl;
    }
    cout<<set1.size()<<endl;
    set<int>::iterator itr;
    for(itr = set1.begin();itr != set1.end(); itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

    for(auto value: set1){                  // it is not advised to use auto keyword.
        cout<<value<<" ";
    }cout<<endl;

    set1.erase(3);

    auto itr1 = set1.begin();
    advance(itr1,2);

    set1.erase(itr1);

    for(auto value: set1){                  // it is not advised to use auto keyword.
        cout<<value<<" ";
    }cout<<endl;

    auto itr2 = set1.begin();
    itr2++;
    auto itr3 = set1.begin();
    advance(itr3,3);

    set1.erase(itr2,itr3);

    for(auto value: set1){                  // it is not advised to use auto keyword.
        cout<<value<<" ";
    }cout<<endl;
    
    cout<<set1.max_size()<<endl;                  // maiximum no. of element the set can hold. it get incresed when the no. of elements reaches near to the max_size();

    set1.insert(4);
    set1.insert(2);
    set1.insert(3);
    set1.insert(10);

    auto a = set1.lower_bound(9);           // Finds the first element greater than or equal to 9. Result: 10.
    auto b = set1.upper_bound(5);           // Finds the first element greater than 5. Result: 10.

    cout<<*a<<endl;                    
    cout<<*b;                  
} 