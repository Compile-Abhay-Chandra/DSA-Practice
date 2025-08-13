#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<vector<string>> Sub_String;
    for(int i=0;i<s.size();i++){
        vector<string> ans;
        ans.push_back(string(1,s[i]));
        for(int j=i+1;j<s.size();j++){
            unordered_set<char> Check_Duplicate;
            if(s[i] == s[j]){
                continue;
            }
            if(Check_Duplicate.find(s[j]) == Check_Duplicate.end()){
                ans.push_back(string(1,s[j]));
            }else{
                break;
            }

        }
        Sub_String.push_back(ans);
    }
    int Final_Ans = 0;
    for(int i=0;i<Sub_String.size();i++){
        if(Sub_String[i].size()>Final_Ans){
            Final_Ans = Sub_String[i].size();
        }
    }
    return Final_Ans;
}

int main(){
    string test = "abcabcbb";
    cout<< lengthOfLongestSubstring(test);
}