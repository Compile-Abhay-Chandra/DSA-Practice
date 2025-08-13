                                    // shift an array by a fixed number
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    for(int i=0; i<9;i++){
        cout<<arr[i];
    }   
        cout<<endl;
    int a; cout<<"enter a number: ";cin>>a; 
    int n=9;
    a=a%n;                                     // keeping a<n
    int arra[n];
    int k=0;
     for(int i=a;i<n;i++){                     // filling last elements
        arra[k++]=arr[i] ;                     //filling values of arra (remember k++)
    }
     for(int i=0;i<=n-a;i++){                   //filling starting elements
        arra[k++]=arr[i] ;
    }
    for(int i=0;i<n;i++){                       // prining the updated element
        cout<<arra[i]<<" ";
    }
}
