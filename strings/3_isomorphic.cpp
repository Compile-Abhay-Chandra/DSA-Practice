// one to one maping is called isomorphic
#include<iostream>
#include<vector>
#include<string>
using namespace std;
bool Is_Isomorphic(string str1,string str2){
    if (str1.length() != str2.length()){
        return false;
    }
    vector<int> v1(128,-1);
    vector<int> v2(128,-1);
    for (int i = 0; i < str1.length(); i++){
        if (v1[str1[i]] != v2[str2[i]]){   //checking if value of character at idx i match in both vectors
            return false;
        }
        else{
            v1[str1[i]] = i;   
            v2[str2[i]] = i;   // storing string position in vectors for characters at idx I
        }
    }
    return true;
}
int main(){
    string str1 = "abhay";
    string str2 = "cldca";
    if (Is_Isomorphic(str1,str2)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}