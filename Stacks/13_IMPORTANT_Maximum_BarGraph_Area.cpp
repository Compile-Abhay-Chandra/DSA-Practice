/*
LeetCode queation no: 84 (Largest Rectangle in Histogram)                   sol: collage wallah ; Stack Lecture 2 video no 60.
Given an array of integer heights representing the histogram's bar height where the width of each bar is 1,
return the area of the largest rectangle in the histogram
*/

#include<iostream>
#include<stack>
#include<climits>
#include<vector>
using namespace std;

int Max_Area(vector<int> &v) {
    int n = v.size();
    stack<int> s;
    int ans = 0; 

    for (int i = 0; i < n; i++) {
        // While the current bar is smaller than the bar at the stack's top
        while (!s.empty() && v[i] < v[s.top()]) {
            int current_element = v[s.top()];                                           // Get the height of the bar at the stack's top
            s.pop();                                                                    // Remove the top element from the stack
            int next_smaller_element = i;                                               // The current index is the next smaller element
            int previous_smaller_element = (s.empty()) ? -1 : s.top();                  // Get the previous smaller element
            // Calculate the area with the current element as the smallest bar
            ans = max(ans, current_element * (next_smaller_element - previous_smaller_element - 1));
        }
        s.push(i);                                                                      // Push the current index to the stack
    }

    // Process the remaining bars in the stack
    while (!s.empty()) {
        int current_element = v[s.top()];                                               // Get the height of the bar at the stack's top
        s.pop();                                                                        // Remove the top element from the stack
        int next_smaller_element = n;                                                   // The end of the histogram is the next smaller element
        int previous_smaller_element = (s.empty()) ? -1 : s.top();                      // Get the previous smaller element
        // Calculate the area with the current element as the smallest bar
        ans = max(ans, current_element * (next_smaller_element - previous_smaller_element - 1));
    }

    return ans; 
}

int main(){
    vector<int> v = {2,1,3,6,2,3};
    int ans = Max_Area(v);
    cout<<"Maximum Area: "<<ans;
}