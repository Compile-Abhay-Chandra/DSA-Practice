/*
You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right.
You can only see the k numbers in the window. Each time the sliding window moves right by one position.
 Return the max sliding window which basically contains the max element in each window.

Note: Leetcode questin 239 (Sliding Window Maximum).

*/

#include<iostream>
#include<deque>
#include<vector>
using namespace std;

vector<int> Max_Element(vector<int> &arr, int k){
    deque<int> dq;
    vector<int> ans;
    for(int i=0; i<k; i++){
        while (!dq.empty() && arr[dq.back()] < arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    ans.push_back(arr[dq.front()]);
    for(int i=k;i<arr.size();i++){
        int curr = arr[i];
        if(dq.front() == (i-k)) dq.pop_front();
        while (!dq.empty() && arr[dq.back()] < arr[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        ans.push_back(arr[dq.front()]);
    }
    return ans;
}

int main(){
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> result = Max_Element(arr, k);
    cout << "Maximum elements in each window of size " << k << ": ";
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}