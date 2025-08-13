#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int , string> List;
    List.insert(make_pair(3,"Abhay"));
    List[1] = "Raj";
    List[2] = "Aman";

    for(auto ele : List){
        cout<<"Roll no. -> "<<ele.first<<endl;
        cout<<"Name -> "<<ele.second<<endl;
    }
}