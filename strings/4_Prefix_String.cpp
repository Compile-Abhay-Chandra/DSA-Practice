/*
Given an array of strings. Write a program to find the longest common prefix string amongst an array of strings.

Input: arr = ["flower", "flight", "flask"]

Output: "fl"

*/
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string Prefix(vector<string> &str){
    sort(str.begin(),str.end());
    string ans = "";
    string str1 = str[0];
    string str2 = str[str.size()-1];
    for (int i = 0; i<str1.size();i++){
        if(str1[i]==str2[i]){
            ans+=str1[i];
        }
        else{
            break;
        }
    }
    return ans;  
}
int main(){
    vector<string> v = {"abhay","abha","abhishek","abhimanyu"};
    string ans = Prefix(v);
    cout<<ans;

}