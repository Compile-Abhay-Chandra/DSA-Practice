// find max value in an array using recursion
#include<iostream>
using namespace std;

int F(int *arr,int index,int size){

if(index==size){
   return arr[index];
}
return max(arr[index],F(arr,index+1,size));

}

int main(){
    
    int size=9;
    int arr[]={1,2,3,4,5,6,7,90,9};
    cout<<F(arr,0,size)<<"\n";

}