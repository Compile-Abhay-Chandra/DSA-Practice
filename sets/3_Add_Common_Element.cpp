/*
Add the common elements
Given 2 vectors vi and v2. Find out the common elements between the two and return the sum of them.

Input: VI = {1, 1, 2, 3, 3, 3} 
       V2 = {5, 6, 7, 5, 2, 3, 6}

Output: 5

Explanation: The values common between V1 and V2 are: 2, 3. So, sum is 2+3 = 5.
*/

#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    vector<int> v1 = {1, 1, 2, 3, 3, 3};
    vector<int> v2 = {5, 6, 7, 5, 2, 3, 6};

    set<int> set1;
    set<int> set2;
    int ans = 0;

    for(auto i:v1){
        set1.insert(i);
    }
    for(auto i: v2){
        if(set1.find(i) != set1.end()){
            ans+=i;
        }
    }
    cout<<"Sum of Common Element: "<<ans;
}