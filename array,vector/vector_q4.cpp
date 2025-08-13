//find total no of triplet pairs in the array whose sum is equal to a given number x . here x= 17
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={3,4,6,7,1};
    int a=0;
for(int i=0;i<5;i++){
    for(int j=i;j<5;j++){
        for(int k=j;k<5;k++){
            if(arr[i]+arr[j]+arr[k]==17){
            a=a+1;
            }
        }
    }
}
cout<<a;
}