// find the first and last occurance of a number in a sorted array
// use two seperate function to find upper and lower bound
#include<iostream>
#include<vector>
using namespace std;
void First_Occurance(vector<int> &v,vector<int> &ans,int start,int last,int target){
    while(start<=last){
        int mid = start + (last-start)/2;
        if (v[mid]>=target){
            if (v[mid]==target){
                ans[0]=mid;
            }
            last=mid-1;
        }
        else if (v[mid]<target){
            start=mid+1;
        }
        
    }
}
void Last_Occurance(vector<int> &v,vector<int> &ans,int start,int last,int target){
    while(start<=last){
        int mid = start + (last-start)/2;
        if (v[mid]>target){
            last=mid-1;
        }
        else if (v[mid]<=target){
            if (v[mid]==target){
                ans[1]=mid;
            }
            start=mid+1;
        }
        
    }
}
int main(){
    vector<int> v={1,2,3,3,3,5,11,11};
    vector<int> ans={-1,1};
    int target = 3 ;
    First_Occurance(v,ans,0,v.size()-1,target);
    Last_Occurance(v,ans,0,v.size()-1,target);
    for (int i=0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}