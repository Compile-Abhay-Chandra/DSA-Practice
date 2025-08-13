// find the maximum element in the array and create a frequency array of size maximum element
// store the no of occurance of the element at its index in the frequency array
// calculate the cumulative frequency from the frequency array
// time complexity O(n+max_elememt) if max_element is very small compared to n than O(n)
// space complexity O(n+max_elememt) 
// not a good algorithm if max_element >n and there are floting point no (5.8)
// if there is a negative element say -(n) in this case we add +n to all the element in the array sort them then 
//      subtract n from the final array
// if the variation in the number is large we dont use this algorithm eg(2,674,86472,65470851)
#include<iostream>
#include<vector>
using namespace std;
void Count_Sort(vector<int> &v){
    int n=v.size();
    int max_element=INT32_MIN;
    for (int i=0;i<n;i++){
        max_element=max(v[i],max_element);
    }
    // frequency vector
    vector<int> freq(max_element+1,0);
    for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    // cumulative frequency
    for (int i=1;i<max_element+1;i++){
        freq[i]+=freq[i-1];
    }
    // calculate the sorted array
    // traverse the orignal array from the back
    // decrement the value of the 
    vector<int> ans(n);
    for (int i=n-1;i>=0;i--){
        ans[--freq[v[i]]]=v[i];
    }
    // copy it to orignal array
    for (int i=0;i<n;i++){
        v[i]=ans[i];
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
    Count_Sort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}