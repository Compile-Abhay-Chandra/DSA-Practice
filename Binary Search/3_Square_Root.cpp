// Find the square root of a given number (only the integer part)
#include<iostream>
#include<vector>
using namespace std;
int Square_Root(int a){
    int low=0;
    int high=a;
    int root=-1;
    while(low<=high){
        int mid=low +(high-low)/2;
        if (mid*mid<=a){
            root=mid;
            low=mid+1;
            
        }
        else {
            high=mid-1;
        }
    }
    return root;
}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<Square_Root(a);
}