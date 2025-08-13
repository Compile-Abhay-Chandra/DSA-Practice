// find the mountain array in the mountain array
// basically find the largest element
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
// int Mountain_Array(int arr[],int start,int end){
//     while(start<=end){
//         int mid = start + (end-start)/2;
//         if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
//             return arr[mid];
//         }
//         else if (arr[mid] > arr[mid-1] && arr[mid] < arr[mid+1]){
//             start = mid + 1;
//         }
//         else if (arr[mid]<arr[mid-1] && arr[mid]>arr[mid+1]){
//             end = mid - 1;
//         }
//     }
//     return INT_MIN;       // technically will never occur for a mountain array
// }
int Mountain_Array(int arr[],int start,int end){
    int ans = -1 ;
    while(start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid] > arr[mid-1]){
            ans = max(arr[mid],ans);
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    int arr[]={1, 3, 5, 6, 4, 2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ele=Mountain_Array(arr,0,size-1);
    cout<<ele;
}