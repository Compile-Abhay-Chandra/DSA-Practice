/*Given a binary string and an integer k, return the maximum number of consecutive I's in the string if you can flip at most k 0's.

Input: "0001101011", k = 2

Output:
7
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int Max_1(string str,int k){
    int i=0;
    int Zero_Count=0;
    int ans=0;
    for(int j=0;j<str.length();j++){
        if(str[j]=='0'){
            Zero_Count++;
        }
        while (Zero_Count > k) {
            if (str[i] == '0') {
                Zero_Count--; 
            }
            i++; 
        }
        ans = max(ans,j-i+1);
    }
    return ans;
}
int main(){
    string str = "0001101011";
    int k = 2;
    cout<<Max_1(str,k);
}