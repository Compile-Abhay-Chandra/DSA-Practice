// we would be given an array and we have to travers every index and find the next smaller element(wrt to index) from the array and add it to another array.
// if there is no smaller element add -1.
// eg [3,6,3,5,8,9,3,6,8] -> [-1,3,-1,3,3,3,-1,-1,-1].

// Same as previous code just change the > to < sign  in while loop
#include<iostream>
#include<stack>
#include<vector>
#include<climits> // INT_MAX , INT_MIN
using namespace std;
 
vector<int> Next_Smaller_Element(vector<int> v){
    int n = v.size();
    vector<int> output (n,-1);
    stack<int> s;                                       // we are storing index of the vector insted of value because we can access value from index but cant do the reverse.
    s.push(0);
    for(int i = 1; i<n; i++){
        while(!s.empty() && v[i] < v[s.top()]){
            output[s.top()] = v[i];
            s.pop();
        }
        s.push(i);
    }
    return output;
}

int main(){
    vector<int>v = {3,6,3,5,8,9,3,6,8};
    vector<int> output = Next_Smaller_Element(v);
    for(int i = 0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
}