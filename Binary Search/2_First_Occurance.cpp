// find the first occurance of a number given he array is sorted
#include<iostream>
#include<vector>
using namespace std;
// int First_Occurance(int arr[],int start,int last,int target){
//     if (start>last){
//         return -1;
//     }
//     int mid=start + (last-start)/2;
//     if (arr[mid]==target){
//         if (mid==0 || arr[mid-1] != target){
//             return mid+1;
//         }
//         else{
//             return First_Occurance(arr,start,mid-1,target);
//         }
//     }
//     else if (arr[mid]>target){
//         return First_Occurance(arr,start,mid-1,target);
//     }
//     else{
//         return First_Occurance(arr,mid+1,last,target);
//     }
// }

int First_Occurance(int arr[],int start,int last,int target){
    while(start<=last){
        int mid=start + (last-start)/2;
        if (arr[mid]==target){
            if (mid==0 || arr[mid-1] != target){
            return mid+1;
            }
            else{
                last = mid-1;
            }
        }
        else if (arr[mid]<target){
            start = mid+1;
        }
        else{
            last = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[]={2,5,5,5,6,6,8,9,9,9};
    int target=6;
    int size=sizeof(arr)/sizeof(arr[0]);
    int index=First_Occurance(arr,0,size-1,target);
    cout<<index;
}