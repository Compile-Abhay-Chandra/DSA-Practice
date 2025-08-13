/*
Check whether two Strings are anagram of each other. Return true if they are else return false. 
An anagram of a string is another string that contains the same characters, only the order of characters can be different. 
For example, "abcd" and "dabc" are an anagram of each other.

Input 1: triangle 
         integral
Output 1: True

Input 2: anagram 
         grams
Output 2: False
*/
#include<iostream>
#include<unordered_map>
#include<string>
// #include<vector>
using namespace std;

bool Anagram(string str1, string str2){
    if(str1.size() != str2.size())  return false;
    unordered_map<char, int> m;
    for(int i=0; i<str1.size();i++){
        m[str1[i]]++;
    }
    for(int i=0; i<str2.size();i++){
        m[str2[i]]--;
    }
    for(auto ele:m){
        if(ele.second != 0){
            return false;
        }
    }
    return true;
}

int main(){
    string str1 = "abhay";
    string str2 = "bhyaa";
    cout<<(Anagram(str1,str2)? "Anagram" : "Not Anagram")<<endl;

}