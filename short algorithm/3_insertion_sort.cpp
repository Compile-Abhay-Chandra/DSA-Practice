// idea --> pick the unsorted element from the right hand side and place it into the correct position in the
//          left hand side of the sorted array
// take two variabe i and j
// i starts from 1 and j starts from i-1 and both end at the end of the array
// if arr[j]>arr[i]   swap their values and decrease the value of j so all the elements in the left is traversed so 
//                    that the the unsorted element is placed at the correct position
//
#include<iostream>
#include<vector>
using namespace std;
void Insertion_Sort(vector<int>&v){
    int n = v.size();
    for(int i=1;i<n;i++){
        int current_element=v[i];
        int j=i-1;
        while(j>=0 && v[j]>current_element){
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=current_element;
    }

}
int main(){
    int a;
    cout<<"Enter the size of the array: ";
    cin>>a;
    vector<int> v(a);
    for (int i=0;i<a;i++){
        cin>>v[i];
    }
    Insertion_Sort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
