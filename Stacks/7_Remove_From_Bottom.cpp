//
#include<iostream>
#include<climits> // INT_MAX , INT_MIN
#include<stack>
using namespace std;

void Remove_At_Bottom_Recursion(stack<int> &input){
    if (input.size() == 1){
        input.pop();
        return;
    }
    int element = input.top();
    input.pop();
    Remove_At_Bottom_Recursion(input);
    input.push(element);
    return ;
}

void Remove_At_Bottom(stack<int> &s){

    stack<int>temp;
    while(s.size() != 1){
        int a = s.top();
        s.pop();
        temp.push(a);
    }
    s.pop();
    while(!temp.empty()){
        int b = temp.top();
        temp.pop();
        s.push(b);
    }

}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    Remove_At_Bottom_Recursion(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}