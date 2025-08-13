#include<iostream>
#include<map>
#include<vector>
#include<string>
using namespace std;
int main(){
    map<string,int> directory;
    directory["Abhay"] = 1234;
    directory["Raj"] = 1234;
    directory["Aman"] = 1234;
    directory["Aryan"] = 1234;

    for(auto element:directory){
        cout<<"Name - "<<element.first<<endl;
        cout<<"Phonr no. - "<<element.second<<endl;
    }
}