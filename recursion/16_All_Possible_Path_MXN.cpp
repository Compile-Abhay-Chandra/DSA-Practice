// Important : All Possible Path in MXN Grid (Recursion)
#include <iostream>
using namespace std;

int AllPossiblePath(int m,int n,int i,int j){
    if (i==m-1 && j==n-1){
        return 1;
   }
    if (i>=m || j>=n){return 0;}    
        return AllPossiblePath(m,n,i+1,j)+AllPossiblePath(m,n,i,j+1);
    }

int main(){
    int m=3,n=3;
    cout<<AllPossiblePath(m,n,0,0);
}