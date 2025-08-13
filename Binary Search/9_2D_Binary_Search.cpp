// find if the target element in the 2D matrix
#include<iostream>
#include<vector>
using namespace std;
int Search_Matrix(vector<vector<int>> &v,int target){
    int n = v.size();
    int m = v[0].size();
    int start=0;
    int end=n*m - 1;
    while (start<=end){
        int mid = start + (end-start)/2;
        if (v[mid/m][mid%m]==target){   // remember  : to find the x and y position in the 2D matrix. 
            return mid;
        }
        else if (v[mid/m][mid%m]>target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return -1;
}
int main(){
    vector<vector<int>> v={{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 16;
    int m = v[0].size();
    int index = Search_Matrix(v,target);
    if (index!= -1){

        int arr[]={index/m+1,index%m+1};
        cout<<"R0w: "<<arr[0]<<" "<<"Column: "<<arr[1];

    }
}