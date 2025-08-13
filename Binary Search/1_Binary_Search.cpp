// both the approach are correct
// the recursion code is done by me but it will give space coplexity O(log n)
// in both time complexity is O(log n)
// using loop methord rhe space complexity is O(1)
#include<iostream>
#include<vector>
using namespace std;
// int Binary_Search(vector<int> &v,int start,int last,int target){
//     if (start>last){
//         return -1;
//     }
//     int mid=start + (last-start)/2;          // better way to find mid element
//     if (v[mid]<target){
//        return  Binary_Search(v,mid+1,last,target);
//     }
//     else if (v[mid]>target){
//         return Binary_Search(v,start,mid-1,target);
//     }
//     else{ 
//         return mid;
//     }
// }

int Binary_Search(vector<int> &v, int start, int last, int target) {
    while (start <= last) {
        int mid =(last + start) / 2;

        if (v[mid] < target) {
            start = mid + 1;  // Search in the right subarray
        } else if (v[mid] > target) {
            last = mid - 1;   // Search in the left subarray
        } else {
            return mid;      // Target found
        }
    }
    return -1;  // Target not found
}

int main(){
    vector<int> v={1,3,4,5,7,9,10,13,15,18,23,25,29,31,35};
    int a=7;
    int l=v.size()-1;
    int index=Binary_Search(v,0,l,a);
    cout<<index+1;
}