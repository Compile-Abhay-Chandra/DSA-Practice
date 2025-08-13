// find the peak element such that peak > peak - 1 && peak > peak + 1
// if it contains multiple peak return any peak
#include<iostream>
#include<vector>
using namespace std;
int Peak(int arr[],int start,int last){
    while(start<=last){
        int mid = start + (last-start)/2;
        if (mid==last){
            if (arr[mid]>arr[mid-1]){
                return mid;
            }
            else{
                return last -1;
            }
        }
        else if (mid == start){
            if (arr[mid]>arr[mid+1]){
                return mid;
            }
            else {
                return start + 1 ;
            }
        }
        else{
            if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if (arr[mid]>arr[mid-1]){
                start = mid + 1;
            }
            else{
                last = mid - 1 ;
            }
        }
    }
    return -1;
}
int main(){
    int arr[]={1,20,1,2,6,5,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = Peak(arr,0,size-1);
    cout<<"Index "<<index<<" ";
    cout<<"Element "<<arr[index];
}