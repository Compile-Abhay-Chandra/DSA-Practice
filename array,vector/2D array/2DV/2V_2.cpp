// Find the maximum number of one in a shorted array
#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;
int ONE(vector<vector<int>>&v){
    int MaxOne=INT16_MIN;
    int Column=0;
    for(int i=0;i<v.size();i++){
        int Number_Of_One=-1;
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                Number_Of_One=v[i].size()-j;
                if(Number_Of_One>MaxOne){
                    MaxOne=Number_Of_One;
                    Column=i;
                }
            }
        }
    }
    return Column;
}
int main(){
    int n,m;
    cout<<"Enter the rows: ";cin>>n;
    cout<<"Enter the columns: ";cin>>m;
    vector<vector<int>>V(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Enter the element: ";cin>>V[i][j];
        }
    }
    int One=ONE(V)+1;
    cout<<One;
}