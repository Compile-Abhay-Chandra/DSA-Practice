// find the k th smallest number using quick sort
#include<iostream>
#include<vector>
using namespace std;

int Partition(vector<int> &v,int i,int l){
    int pivot=v[l];
    int start=i;
    for (int j = i; j < l; j++){
        if (v[j]<pivot){
            swap(v[start], v[j]);
            start++; 
        }
    }
    swap(v[start], v[l]);
    return start;
}

int Quick_Select(vector<int> &v,int first,int last,int k){
    if (k>0 && k<=last+1 && first<=last){
 
        int pivot = Partition(v,first,last);
        if (pivot == k-1){
            return v[pivot];
        }
        else if(pivot > k-1){
            return Quick_Select(v,first,pivot - 1,k);

        }
        else{
            return Quick_Select(v,pivot + 1,last,k);

        }
    }
    return -1;
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    vector<int> v(size);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < size; i++) {
        cin >> v[i];
    }
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    int num = Quick_Select(v,0,size-1,k);
    for(int i=0;i<size;i++){
        cout<<v[i];
    }
    cout<<endl;
    cout<<num;
}