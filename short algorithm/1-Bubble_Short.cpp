// To short an array of integers, we can use the bubble short algorithm.
// idea --> compare the two adjecent elements of the array and swap them 

#include <iostream>
#include <vector>
using namespace std;
void Bubble_Short(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        bool flag=false;                             // To check if the array is already shorted or not || used for nearly shorted array
        for(int j=0;j<arr.size()-i-1;j++){
            if (arr[j]>arr[j+1]){
                flag=true;
                swap(arr[j],arr[j+1]);
            }
        }
        if (!flag){ 
            break;
    }
}
}
int main(){
    vector<int> arr={1,3,5,2,4,6,9,7,8};
    Bubble_Short(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}