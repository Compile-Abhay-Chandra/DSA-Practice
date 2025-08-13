// transpose of an matrix
#include<iostream>
using namespace std;
int main(){
     int row1,column1;
    cout<<"enter the size of the row: ";
    cin>>row1;
    cout<<"enter the size of the column: ";
    cin>>column1;
    int arr1[row1][column1];
    for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            cout<<"Enter the element: ";cin>>arr1[i][j];
        }
    }
    int row2,column2;
    row2=column1;
    column2=row1;
    int arr3[row2][column2];
     for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            arr3[i][j]=0;
        }
     }
     for(int i=0;i<row1;i++){
        for(int j=0;j<column1;j++){
            arr3[i][j]=arr1[j][i];
        }
     }
     for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}