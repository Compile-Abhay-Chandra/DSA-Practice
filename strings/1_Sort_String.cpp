#include<iostream>
#include<string>
#include<vector>
using namespace std;
string Sort(string str){
    vector<int> freq(26,0);
    for (int i = 0 ; i<str.length();i++){
        int index = str[i]-'a';
        freq[index]++;
    }
    
    int j=0;
    for (int i=0;i<26;i++){
        while(freq[i]--){              // till freq array becomes 0;
            str[j++]=i+'a';
        }
    }
    return str;
}
int main(){
    string str;
    cin>>str;
    cout<<Sort(str);

}