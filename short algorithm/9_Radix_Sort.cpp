// special case of count sort
// used when there are significant variation in the array eg: 2,556,78465,15,3644
// insted of sorting the whole number it firsts sort the number on the basis of once place than tens place than hundred place and so on
// time complexity in O(no of digit*(n+max_element)) here max_element will always lie between 0-9 so we can ignore it hence O(no of digit*(n))
// space complexity is O(n+min_element)--> O(n)
#include<iostream>
#include<vector>
#include<climits>  // for INT_MIN
using namespace std;

void Count_Sort(vector<int> &v,int n,int pos){
    vector<int> freq(10,0); // the number can vary from 0-9 only
    for (int i=0;i<n;i++){
        freq[(v[i]/pos)%10]++;  
    }
    for(int i=1 ; i< freq.size();i++){
        freq[i]+=freq[i-1];
    }
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        ans[--freq[(v[i]/pos)%10]]=v[i];
    }
    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }
}
                                                                   
void Radix_Sort(vector<int> &v,int n){
    int Max_Element=INT_MIN;
    for (int i=0;i<n;i++){
        Max_Element=max(v[i],Max_Element);
    }
    for(int position=1;Max_Element/position>0;position*=10){
        Count_Sort(v,n,position);
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
    int n=v.size();
    Radix_Sort(v,n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}