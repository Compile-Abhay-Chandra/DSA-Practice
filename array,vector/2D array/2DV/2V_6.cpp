// To print sum of an arrar in a given region
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
void Rectangle_Sum(vector<vector<int>>&matrix,int row_1,int column_1,int row_2,int column_2){
    int Sum=0;
    for(int i=row_1;i<=row_2;i++){
        for(int j=column_1;j<=column_2;j++){
            Sum+=matrix[i][j];
        }
    }
    cout<<Sum;
}
int main(){
    int n,m;
    cout<<"Enter the rows: ";cin>>n;
    cout<<"Enter the columns: ";cin>>m;
    vector<vector<int>>matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter the element["<<i<<"]["<<j<<"]: ";cin>>matrix[i][j];
        }
    }
    int row_1,row_2,column_1,column_2;
    cout<<"Enter the cordinate1: ";cin>>row_1>>column_1;
    cout<<"Enter the cordinate2: ";cin>>row_2>>column_2;
    row_1=row_1-1;                  // indexing starts from 0
    column_1=column_1-1;
    row_2=row_2-1;
    column_2=column_2-1;
        Rectangle_Sum(matrix, row_1, column_1, row_2, column_2);
}