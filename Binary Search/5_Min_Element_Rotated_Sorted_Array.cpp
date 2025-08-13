// find the minimum element in a rotated sorted array
#include<iostream>
#include<vector>
using namespace std;
int Min_Element(int arr[],int start, int last){
    if (last=0){                // if there are only two element
        return start;
    }
    if (arr[start]<=arr[last]){ // if the array is not rotated
        return start;

    }
    int index=-1;
    while(start<=last){
        int mid = start + (last-start)/2;
        if (mid > 0 && arr[mid] < arr[mid-1]){
            return mid;
        }
        if (arr[mid]>arr[last]){
            start=mid+1;
        }
        else{
            index=mid;
            last=mid-1;
        }
    }
    return index;
}
int main(){
    int arr[]={50, 60, 10, 20, 30, 40};
    int size=sizeof(arr)/sizeof(arr[0]);
    int index = Min_Element(arr,0,size-1);
    if (index != -1){
        cout<<arr[index];
    }
}