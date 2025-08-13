// idea--> find the minimum value in the array and place it at the staring index
// assume that the minimum element is placed at the start of the array
// travel through the array and update the minimum index if starting index is not the minimum element 
// swap the minimum element with the starting element is they are not same 
#include<iostream>
#include<vector>
using namespace std;
void Selection_Sort(vector<int> &v){
    for(int i=0;i<v.size()-1;i++){
        int Min_Index=i;
        for(int j=i+1;j<v.size();j++){
            if(v[i]>v[j]){
                Min_Index=j;
        }
        }
        if(Min_Index!=i){
            swap(v[i],v[Min_Index]);
            }
    }
}
int main(){
    vector<int> v={8,3,5,7,9,2,4,6,1};
    Selection_Sort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}