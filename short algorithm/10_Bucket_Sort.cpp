// used when elements ore in floating point number
// first create a 2D Vector of size(array_size,__)
// multiply the element of orignal array to the size of the orignal array and get its floor value and save it in the index variable
// then place the number at the index of the 2D vector using v.push_back() function
// then sort the rows of the 2D vector if there are more than 2 elements in the the row
// then traverse through every element of both the vectors and update the value of the orignal array 
// you will get the sorted array
#include<iostream>
#include<vector>
#include<algorithm>  // for sort function
using namespace std;
void Bucket_Sort(float arr[],int size){
    vector<vector<float>> Bucket(size,vector<float> ());
    
    for (int i=0;i<size;i++){
        int index=arr[i]*size;
        Bucket[index].push_back(arr[i]);
    }
    for (int i=0;i<size;i++){
        if(!Bucket[i].empty()){
            sort(Bucket[i].begin(),Bucket[i].end());
        }
    }
    int k=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<Bucket[i].size();j++){
            arr[k++]=Bucket[i][j];
        }
    }
}
int main(){
    float arr[]={ 0.13,0.45,0.12,0.89,0.75,0.63,0.85,0.39 };
    int n=sizeof(arr)/sizeof(arr[0]);
    Bucket_Sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}