/*
Given an array of length n and a target, return a pair whose sum is equal to the target. If there is no pair present, return -1.

Input 1: n = 7 
Elements = [1, 4, 5, 11, 13, 10, 2) 
Target = 13
Output 1: [3, 6]

Input 2: n = 5 
Elements = [9, 10, 2, 3, 5] 
Target = 15
Output 2: [1, 4]
*/

#include<iostream>
#include<string>
#include<unordered_map>
#include<vector>
using namespace std;

vector<int> TargetSum(vector<int> v,int k){
    unordered_map<int,int> m;
    vector<int> ans(2,-1);
    for(int i=0; i<v.size();i++){
        if(m.find(k - v[i]) != m.end()){
            ans[0] = i;
            ans[1] = m[k - v[i]];
            return ans;
        }else{
            m[v[i]] = i;
        }
    }
    return ans;
}

int main(){
    vector<int> v = {9, 10, 2, 3, 5};
    int target = 15;
    vector<int> ans = TargetSum(v,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}