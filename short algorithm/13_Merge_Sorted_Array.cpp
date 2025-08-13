// given two sorted array merge them in a sorted manner
#include<iostream>
#include<vector>
using namespace std;
void Merge(int arr1[],int size1,int arr2[],int size2){
    int arr3[size1+size2];
    int i=0;
    int j=0;
    int k=0;
    while (i<size1 && j<size2){
        if (arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while (i<size1){
        arr3[k++]=arr1[i++];
    }
    while (j<size2){
        arr3[k++]=arr2[j++];
    }
    for (int i=0;i<size1+size2;i++){
        cout<<arr3[i]<<" ";
    }
    
}
int main(){
    int num1[]={5,8,10};
    int num2[]={2,7,8};
    int size1=sizeof(num1)/sizeof(num1[0]);
    int size2=sizeof(num2)/sizeof(num2[0]);
    Merge(num1,size1,num2,size2);
}