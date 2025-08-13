// sorting list of characters using selection sort
#include<iostream>
#include<string>
using namespace std;
void sort(string fruits[],int n){
    for (int i=0;i<n;i++){
        int min_idx=i;
        for (int j=i+1;j<n;j++){
            if (fruits[j]<fruits[min_idx]){
                min_idx=j;
            }
        }
    if(min_idx != i){
        swap(fruits[min_idx],fruits[i]);
    }
    }
}
int main(){
    string fruits[]={"papaya","lime","watermelon","apple", "mango","kiwi"};
    int n=sizeof(fruits)/sizeof(fruits[0]);
    sort(fruits,n);
    for (int i=0;i<n;i++){
        cout<<fruits[i]<<" ";
    }
    cout<<endl;
}