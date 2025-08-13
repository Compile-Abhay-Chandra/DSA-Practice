/*
Check whether two Strings are isomorphic of each other. Return true if they are else return false.
Two strings are isomorphic of each other if there is a one-to-one mapping possible for every character of the first string
to every character of second string and all occurrences of every character in first string maps to the same character in the second string

Input 1: aab    xxy
Output 1: True

Input 2: abcdec     viouog
Output 2: False
*/

#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<string>
using namespace std;

bool CheckOneToOneMaping(string s1, string s2){
    unordered_map<char, char> m;
    for(int i=0; i<s1.length(); i++){
        if(m.find(s1[i]) != m.end()){
            if(m[s1[i]] != s2[i]){
                return false;
            }
        }
        else{
            m[s1[i]] = s2[i]; 
        }
    }
    return true;
}

bool Isomorphic(string s1, string s2){
    if(s1.length() != s2.length())  return false;

    bool s1s2 = CheckOneToOneMaping(s1,s2);
    bool s2s1 = CheckOneToOneMaping(s2,s1);

    return s2s1 && s1s2;
}

int main(){
    string s1 = "aab";
    string s2 = "xxy";

    cout<<(Isomorphic(s1,s2)? "Isomorphic" : "Not Isomorphic")<<endl;
}