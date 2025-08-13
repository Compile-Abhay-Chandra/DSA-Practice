/*
Given a series of N daily price quotes for a stock, we need to calculate the span of the stock's price for all N days.
The span of the stock's price in one day is the maximum number of consecutive days (starting from that day and going backward) 
for which the stock price was less than or equal to the price of that day.

eg: [100,80,60,70,60,75,85] -> [1,1,1,2,1,4,6]
*/

#include<iostream>
#include<algorithm>             // for reverse function
#include<vector>
#include<stack>
using namespace std;

vector<int> Stock_Prices(vector<int> &v){
    int n = v.size();
    vector<int> output(n,1);
    stack<int> s;

    for(int i=0; i<n; i++){
        while(!s.empty() && v[i] >= v[s.top()]){
            s.pop();
        }
        output[i] = s.empty() ? (i+1) : (i-s.top());
        s.push(i);
    }

    return output;
}

int main(){
    vector<int> v = {4,3,2,7,8,9,1,2,3,6,5};
    vector<int> output = Stock_Prices(v);
    for (int i = 0; i < output.size(); i++)
    {
        cout<<output[i]<<" ";
    }
    
}