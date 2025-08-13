// Pascal Triangle
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>pascal_triangle(int n){              //This function returns a 2D vector representing Pascal’s Triangle with n rows.
    vector<vector<int>>p(n);                            //Initializes a 2D vector p with n rows.
    for(int i=0;i<n;i++){
        p[i].resize(i+1);                               //Resizes the i-th row to have i + 1 elements.
        for(int j=0; j<=i;j++){
            if(j==0 || j==i){
                p[i][j]=1;
            }
            else{
            p[i][j]=p[i-1][j]+p[i-1][j-1];
            }
        }
    }
return p;
}
int main(){
    int size;
    cout<<"Enter the size of the pascal Triangle: ";
    cin>>size;
    vector<vector<int>>v;
    v=pascal_triangle(size);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
