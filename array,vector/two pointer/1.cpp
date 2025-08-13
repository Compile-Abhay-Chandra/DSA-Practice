// take input and short zeroes and one
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort(vector<int> &v){                      // will work without &v but it is used to avoid unnecesary copying of data. it is called pass by reference
    int ptr_left=0;
    int ptr_right=v.size()-1;
    while(ptr_left<ptr_right){
        if(v[ptr_left]==1 && v[ptr_right]==0){          // 1 st mehord (better)
            v[ptr_left++]=0;
            v[ptr_right--]=1;
        }
        if(v[ptr_left]==0){
            ptr_left++;
        }
        if(v[ptr_right]==1){
            ptr_right--;
        }
    }
    // int zero=0;
    // for(int a:v){                                 //       a is the loop variable, and v represents the sequence of elements you’re iterating over (like an array or container). The loop will execute the code inside the {} for each element in v. 
    // if (a==0){
    //     zero++;
    // }
    // }
    // for(int i=0;i<v.size();i++){                 // 2 nd methord
    //     if(i<zero){
    //         v[i]=0;
    //     }
    //     else{
    //     v[i]=1;
    //      }
    // }
    return;
}
int main(){
    int size;
    cout<<"enter the size: ";
    cin>>size;
    vector<int>v(size);
    for(int i=0 ; i<v.size(); i++){
        int a;
        cout<<"enter the numbers: ";
        cin>>a;
        v[i]=a;
    }
    sort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
