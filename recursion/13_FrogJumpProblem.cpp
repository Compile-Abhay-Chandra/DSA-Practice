// Important: Frog Jump Problem (Recursion)
#include <iostream>
using namespace std;
int FrogJump(int h[],int n,int i){
    if (i==n-1) return 0;
    if (i==n-2) return FrogJump(h,n,i+1) + abs(h[i]-h[i+1]);
    return min(FrogJump(h,n,i+1) + abs(h[i]-h[i+1]) , FrogJump(h,n,i+2) + abs(h[i]-h[i+2]));
}
int main(){
    int arr[]={10,30,40,20};
    int n=4;
    cout<<FrogJump(arr,n,0);
}