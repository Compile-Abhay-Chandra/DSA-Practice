// Important : SubSet of a String (Recursion)
#include <iostream>
#include <string>
#include <vector>
using namespace std;
void SubSet(string &s,string res,vector<string> &result,int i){
    if (i==s.length()){
        result.push_back(res);
        return ;
    }
    SubSet(s,res + s[i],result,i+1);
    SubSet(s,res,result,i+1);
}
int main(){
    string s="Abhay";
    vector<string> result;
    SubSet(s," ",result,0);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}