// printing matrix in a spiral form
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
void Spiral(vector<vector<int>>&matrix){
    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;
    int direction=0;
    while(left <= right && top <= bottom){
        if(direction==0){
            for(int row=left;row<=right;row++){
                cout<<matrix[top][row]<<" ";
            }
            top++;
        }
        else if (direction==1){
            for(int col=top;col<=bottom;col++){
                cout<<matrix[col][right]<<" ";
            }
            right--;
        }
        else if(direction==2){
            for(int row=right;row>=left;row--){
                cout<<matrix[bottom][row]<<" ";
            }
            bottom-- ;
        }
        else if(direction==3){
            for(int col=bottom;col>=top;col--){
                cout<<matrix[col][left]<<" ";
            }
            left++;
        }
    direction=(direction+1)%4;
    }
}
int main(){
    int n,m;
    cout<<"Enter the rows: ";cin>>n;
    cout<<"Enter the columns: ";cin>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter the element: ";cin>>matrix[i][j];
        }
    }
    Spiral(matrix);
}
