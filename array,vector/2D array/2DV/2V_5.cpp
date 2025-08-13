// in a square matirx fill the element in the spiral form
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Spiral_input(vector<vector<int>>&matrix){
    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;
    int direction=0;
    while(left <= right && top <= bottom){
        if(direction==0){
            for(int row=left;row<=right;row++){
                cin>>matrix[top][row];
            }
            top++;
        }
        else if (direction==1){
            for(int col=top;col<=bottom;col++){
                cin>>matrix[col][right];
            }
            right--;
        }
        else if(direction==2){
            for(int row=right;row>=left;row--){
                cin>>matrix[bottom][row];
            }
            bottom-- ;
        }
        else if(direction==3){
            for(int col=bottom;col>=top;col--){
                cin>>matrix[col][left];
            }
            left++;
        }
    direction=(direction+1)%4;
    }
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int x;
    cout<<"Enter the size of the matrix: ";cin>>x;
    vector<vector<int>>matrix(x,vector<int>(x));
    Spiral_input(matrix);
}