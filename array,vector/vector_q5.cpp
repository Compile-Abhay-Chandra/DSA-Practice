//find unique no in the given array {1,2,3,4,1,2,3}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,1,2,3};
for(int i=0;i<7;i++){
    for(int j=i+1;j<=7;j++){
        if(arr[i]==arr[j]){
            arr[i]=arr[j]=0;
        } 
              }
}
     for(int i=0;i<7;i++){  
        if(arr[i]>0) cout<<arr[i];
     }
}