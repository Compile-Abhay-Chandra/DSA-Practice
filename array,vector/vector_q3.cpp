//find total no of pairs in the array whose sum is equal to a given number x . here x=7
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={3,4,6,7,1};
    int a=0;
for(int i=0;i<5;i++){
    for(int j=0;j<5-i;j++){
        if(arr[i]+arr[j]==7){
            a=a+1;
        }
    }
}
cout<<a;
}