// Rotate a square matrix by 90 degree without creating a extra space
// First take the transpose of the matrix then reverse each row of the matrix
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
void Rotate(vector<vector<int>>&v,int n){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<i;j++){// j<i because if j<v.size() then element will be swaped twice and it will become orignal matrix.
            swap(v[i][j],v[j][i]);

    }
    }
    for(int i=0;i<v.size();i++){
        reverse(v[i].begin(),v[i].end());
    }
}
int main(){
    int n;
    cout<<"Enter the size of the matrix: ";cin>>n;
    vector<vector<int>>V(n,vector<int>(n));
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter the element: ";cin>>V[i][j];
        }
    }
    Rotate(V,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<V[i][j]<<" ";
        }
        cout<<endl;
    }
}
