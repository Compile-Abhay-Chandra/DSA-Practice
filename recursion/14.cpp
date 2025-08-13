// to find if a numbe is present in an array or not using recursion.
#include<iostream>
using namespace std;
bool Find(int arr[],int n,int x,int y){
    if (y==n) return 0;
    if (arr[y]==x) return 1;
    return Find(arr,n,x,y+1);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int x=9;
    bool z=Find(arr,n,x,0);
    if (z==1) cout<<"Yes";
    else cout<<"No";
}