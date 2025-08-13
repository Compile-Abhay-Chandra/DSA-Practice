// find the index of the target element in the rotated sorted array
#include<iostream>
#include<vector>
using namespace std;
int Find(int arr[],int start,int end,int target){
    while(start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid]==target){
            return mid;
        }
        if (arr[mid]>arr[start]){
            if (arr[mid] > target && arr[start] > target){
                start = mid + 1;
            }
            else{
                end = mid -1;
            }
        }
        else {
            if (arr[mid] < target && arr[end]>target){
                start = mid + 1 ;
            }
            else{
                end = mid - 1;
            }
        }
    }
}
int main(){
    int arr[]={35, 45, 5, 15, 25};
    int target= 25;
    int size = sizeof(arr)/sizeof(arr[0]);
    int index=Find(arr,0,size,target);
    cout<<index;
}