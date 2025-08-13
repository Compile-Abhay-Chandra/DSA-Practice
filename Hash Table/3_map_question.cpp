/*
You are given an integer n, representing the number of elements. Then, you will be given n elements.
You have to return the sum of repetitive elements i.e. the elements that appear more than one time.

Input:
n=7
Elements = [1, 1, 2, 1, 3, 3, 3]

Output: 4
Explanation: The repetitive elements are 1, 3 and the sum is 4.
*/
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1,1,2,1,3,3,3};
    map<int,int> freq;
    for(int i =0; i<v.size();i++){
        freq[v[i]]++;
    }
    int sum = 0;
    for(auto element : freq){
        if(element.second > 1){
            sum+=element.first;
        }
    }
    cout<<"Ans: "<<sum;

}