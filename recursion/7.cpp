#include<iostream>
using namespace std;
int F(int *arr,int ind,int size){
    if(ind==size){
        return 0;
    }
    return arr[ind]+F(arr,ind+1,size);
}
int main(){
    int n=0;
    int size=10;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    cout<<F(arr,n,size);
}