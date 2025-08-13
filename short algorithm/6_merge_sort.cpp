// idea --> dividing the array into smaller array and sorting them and merging them
// finding the mid of the array recusively until only one element is left in the array
// call the merge function 
// first create two temp array containing the elements of orignal array 
// then sort them 
// then merge the array in sorted manner

// time complexcity O(nlog(n)) & space complexity O(n)
// slower for smaller problem 
// stable sort
#include<iostream>
using namespace std;

void merge(int arr[],int mid,int l, int n){
    int size_a=mid-l+1;
    int size_b=n-mid;
    int a[size_a];
    int b[size_b];

    for (int i=0;i<size_a;i++){
        a[i]=arr[l+i];
    }
    for (int i=0;i<size_b;i++){
        b[i]=arr[mid + 1 + i];
    }

    int start_a=0;
    int start_b=0;
    int start_orignal=l;

    while(start_a<size_a && start_b<size_b){
        if (a[start_a]<b[start_b]){
            arr[start_orignal++]=a[start_a++];
        }
        else {
            arr[start_orignal++]=b[start_b++];
        }
    }
    while(start_a<size_a){
        arr[start_orignal++]=a[start_a++];
    }
    while(start_b<size_b){
        arr[start_orignal++]=b[start_b++];
    }
}

void sort(int arr[],int l,int n){
    if (l>=n){
        return;
    }
    int mid=(l+n)/2;
    sort(arr,l,mid);
    sort(arr,mid+1,n);
    merge(arr,mid,l,n);
}

int main(){
    int arr[]={10,5,3,9,7,8,6,2,4,48,62,95,71,35};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}