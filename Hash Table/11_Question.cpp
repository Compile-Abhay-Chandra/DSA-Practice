/*
Given an array arr[] of length N, find the length of the longest subarray with a sum equal to 0.

Input 1: n = 8
arr[] = {15, -2,2,-8, 1, 7, 10, 23}

Output 1: 5

Input 2: n = 3
arr[] = {1, 2, 3}

Output 2: 0
*/
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<climits>
using namespace std;

int MaxLengthSubArray(vector<int> v, int n){
    unordered_map<int,int> m;
    int prefix_sum = 0;
    int max_length = 0;
    for(int i=0; i<v.size();i++){
        prefix_sum+=v[i];
        if(prefix_sum ==0 ){
            max_length = i+1;
        }
        if(m.find(prefix_sum) != m.end()){
            max_length = max(max_length, i - m[prefix_sum]);
        }else{
            m[prefix_sum] = i;
        }
    }
    return max_length;

}

int main(){

    vector<int> v = {15, -2,2,-8, 1, 7, 10, 23};
    int size = v.size();

    cout<<MaxLengthSubArray(v,size);
}