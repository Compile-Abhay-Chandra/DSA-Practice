// print an array using recursion
#include<iostream>
using namespace std;

void F(int *arr,int index,int size){

if(index==size){
   return;
}
cout<<arr[index]<<"\n";
F(arr,index+1,size);

}

int main(){
    
    int size=9;
    int arr[]={1,2,3,4,5,6,7,8,9};
    F(arr,0,size);

}