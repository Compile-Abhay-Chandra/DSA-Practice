// idea --> taking a pivot element and placing it at its correct place then again choosing the pivot element from 
//          the sub array formed before and after the pivot element and placing it at its correct place and repeating 
//          the process again and again untill the array is sorted.
// pivot element (last index of the array)
// taking two pointer 'start' and 'j'
// 'start' starts from (0 index - 1) and j starts from 0 index 
// if j is less than pivot start++ and then swap arr[start] and arr[j]
// swaping start+1 and pivot element
// unstable sort better in smaller database compared to merg sort
// worst case n^2 and average and best case nlog(n)  

#include<iostream>
using namespace std;

int Partition(int arr[],int i,int l){

    int pivot=arr[l];
    int start=i;
    for (int j=i;j<l;j++){
        if (arr[j]<pivot){
            swap(arr[start],arr[j]);
            start++;
        }
    }
    swap(arr[start],arr[l]);
    return start;
    
}

void Quick_Sort(int arr[],int first,int last){
    if (first>=last){
        return;
    }
    int pivot=Partition(arr,first,last);
    Quick_Sort(arr,first,pivot-1);
    Quick_Sort(arr,pivot+1,last);
}

int main(){
    int arr[]={18,12,30,16,35,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    Quick_Sort(arr,0,size-1);
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}