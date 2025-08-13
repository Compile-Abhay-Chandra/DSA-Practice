// take input and short even and odd numbers
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void Sort(vector<int> &v){                      // will work without &v but it is used to avoid unnecesary copying of data. it is called pass by reference
    int ptr_left=0;
    int ptr_right=v.size()-1;
        while(ptr_left<ptr_right && v[ptr_left]%2==0){
            ptr_left++;
            }
        while(ptr_left<ptr_right && v[ptr_right]%2==1){
            ptr_right--;
            }
        if(ptr_left<ptr_right){
            swap(v[ptr_left],v[ptr_right]);
            ptr_left++;
            ptr_right--;
        }
        // Separate even and odd numbers
    // All even numbers are now at the beginning, sort them
    sort(v.begin(), v.begin() + ptr_left);
    // All odd numbers are now at the end, sort them
    sort(v.begin()+ptr_left+1 , v.end());
    }
int main(){
    int size;
    cout<<"enter the size: ";
    cin>>size;
    vector<int>v(size);
    for(int i=0 ; i<size; i++){
        int a;
        cout<<"enter the numbers: ";
        cin>>a;
        v[i]=a;
    }
    Sort(v);
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
}
