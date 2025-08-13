/*
Given an array of strings. You can move any number of characters from one string to any other string any number of times.
You just have to make all of them equal. Print "Yes" if you can make every string in the array equal by using any number of operations otherwise print "No".

Input: ["collegeee", "coll", "collegge"]
Output: Yes
Explanation: string at 1 index can take two 'e' from 0 index string and one 'g' from 2 index string.

Input: ["wall", "ah", "wallahah"]
Output: No
Explanation: Here we don't have enough number of characters to make all strings equal.
*/

#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

bool CanMakeEqual(vector<string> &v){
    unordered_map<char,int> m;
    for(auto str:v){
        for(char c:str){
            m[c]++;
        }
    }
    int n = v.size();
    for(auto ele:m){
        if(ele.second%n!=0){
            return false;
        }
    }
    return true;
}

int main(){
    vector<string> str = {"collegeee", "coll", "collegge"};
    cout<<(CanMakeEqual(str) ? "Yes" : "No")<<endl;

}