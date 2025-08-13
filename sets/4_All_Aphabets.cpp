#include<iostream>
#include<string>
#include<set>
#include<algorithm>             // for transform function.
using namespace std;

bool CheckAllAlphabet(string &str){
    if(str.length()<26) return false;

    transform(str.begin(),str.end(),str.begin(),::tolower);

    set<char> alphabets;
    for(auto s: str){
        alphabets.insert(s);
    }

    return alphabets.size() == 26;
}

int main(){
    string str = "abcdefghIJklMnopQrstUvwXYz";
    cout<<(CheckAllAlphabet(str) ? "All alphabets are present": "Not all alphabets are present");
}