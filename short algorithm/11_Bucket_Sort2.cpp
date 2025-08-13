// just change the formula of calculating the index
// everything else is same as the previous algorithm
#include<iostream>
#include<vector>
#include<algorithm>  // for sort function
using namespace std;
void Bucket_Sort(float arr[],int size){
    vector<vector<float>> Bucket(size,vector<float> ());

    float max_element=arr[0];
    float min_element=arr[0];
    for (int i=1;i<size;i++){
        max_element=max(arr[i],max_element);
        min_element=max(arr[i],min_element);
    }
    float range = (max_element - min_element)/size;
    
    for (int i=0;i<size;i++){
        int index=(arr[i]-min_element)/range;
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
    float arr[]={ 6.13,8.45,0.12,1.89,4.75,2.63,7.85,10.39 };
    int n=sizeof(arr)/sizeof(arr[0]);
    Bucket_Sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}                    