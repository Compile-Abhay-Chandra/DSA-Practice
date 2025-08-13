// we would be given an array and we have to travers every index and find the next grater element(wrt to index) from the array and add it to another array.
// if there is no greater element add -1.
// eg [3,6,3,5,8,9,3,6,8] -> [6,8,5,8,9,-1,6,8,-1].
#include<iostream>
#include<stack>
#include<vector>
#include<climits> // INT_MAX , INT_MIN
using namespace std;
 
vector<int> Next_Greater_Element(vector<int> v){
    int n = v.size();
    vector<int> output (n,-1);
    stack<int> s;                                       // we are storing index of the vector insted of value because we can access value from index but cant do the reverse.
    s.push(0);
    for(int i = 1; i<n; i++){
        while(!s.empty() && v[i] > v[s.top()]){
            output[s.top()] = v[i];
            s.pop();
        }
        s.push(i);
    }
    return output;
}

int main(){
    vector<int>v = {3,6,3,5,8,9,3,6,8};
    vector<int> output = Next_Greater_Element(v);
    for(int i = 0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
}