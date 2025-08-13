/*
Leetcode question No 155 (Min Stack).
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:
        MinStack() initializes the stack object.
        void push(int val) pushes the element val onto the stack.
        void pop() removes the element on the top of the stack.
        int top() gets the top element of the stack.
        int getMin() retrieves the minimum element in the stack.

You must implement a solution with O(1) time complexity for each function.
Assumption: Methods pop, top and getMin operations will always be called on non-empty stacks.
*/

#include<iostream>
#include<stack>
#include<climits>
using namespace std;

#define ll long long int
class MinStack{
public:
    stack<ll> st;
    ll mn;
    MinStack(){
        mn = INT_MAX;
    }

    void push(int val){                         // insted of storing the orignal value we are storing val - mn;
        if(st.empty()){
            mn = val;
            st.push(val);
        }else{
            st.push(val-mn);
            if(mn>val){
                mn = val;
            }
        }
    }

    void pop(){
        if(!st.empty()){
            if(st.top() >= 0){                  // when st.top() is positive the value of mn is not being updated because it ensures that the encoded value is greater than the mn value.
                st.pop();
            }else{
                mn = mn - st.top();
                st.pop();
            }
        }
    }

    int top(){
        if(st.size() == 1){
            return st.top();
        }else if(st.top() < 0){
            return mn;
        }else{
            return mn + st.top();
        }

    }

    int getMin(){
        return mn;
    }
};


int main(){
    MinStack minStack;
    minStack.push(10);
    minStack.push(5);
    minStack.push(6);
    minStack.push(12);
    minStack.push(-1);
    minStack.push(-5);
    cout << "Minimum Element: " << minStack.getMin() << endl; 
    minStack.pop();
    cout << "Top Element: " << minStack.top() << endl;
    cout << "Minimum Element: " << minStack.getMin() << endl; 
    return 0;
}