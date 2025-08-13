// matrix multiplicaion
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
    cout<<"enter the size of the row: ";
    cin>>row2;
    cout<<"enter the size of the column: ";
    cin>>column2;
    int arr2[row2][column2];
    for(int i=0;i<row2;i++){
        for(int j=0;j<column2;j++){
            cout<<"Enter the element: ";cin>>arr2[i][j];
        }
    }
    if(column1!=row2){
        cout<<"Error";
    return 1;
    }
     int arr3[row1][column2];
     for(int i=0;i<row1;i++){
        for(int j=0;j<column2;j++){
            arr3[i][j]=0;
        }
     }
    for(int i=0;i<row1;i++){
        for(int j=0;j<column2;j++){
            for(int k=0;k<column1;k++){
                    arr3[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
    for(int i=0;i<row1;i++){
        for(int j=0;j<column2;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}
