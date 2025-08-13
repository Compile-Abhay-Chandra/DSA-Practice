// basically create a freq vector for string 1 and store the count and then subtract the frequency of string 2 if the vector become 0 they are anagram
#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool Is_anagram(string str1,string str2){
    
    vector<int> freq(26,0);

    if (str1.length() != str2.length()) {
        return false;
    }

    for (int i=0;i<str1.length();i++){
        freq[tolower(str1[i]) - 'a']++;
        freq[tolower(str2[i]) - 'a']--;

    }
    
    for (int i=0;i<26;i++){
        if (freq[i]!=0){
            return false;
        }
    }
    return true;

}
int main(){
    string str1 = "abhay";
    string str2 = "ABHAY";
    if (Is_anagram(str1,str2)){
        cout<<"True";
    }
    else {
        cout<<"False";
    }

}