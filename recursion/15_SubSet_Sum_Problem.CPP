// IMPORTANT : PRINTIING SUM OF ALL SUBSETS OF ARRAY
#include <iostream>
#include <vector>
using namespace std;
int SubsetSum(int arr[],int n,int i,int sum,vector<int> &result){
    if(i==n){
        result.push_back(sum);
        return 0;
    }
    SubsetSum(arr,n,i+1,sum+arr[i],result);
    SubsetSum(arr,n,i+1,sum,result);

}
int main(){
    int arr[]={2,4,5};
    int size=3;
    int sum=0;
    vector<int> result;
    SubsetSum(arr,size,0,sum,result);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}