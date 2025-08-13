//
#include<iostream>
#include<stack>
#include<climits> // INT_MAX , INT_MIN
using namespace std;

stack<int> Copy_Stack_Recursion(stack<int> &input , stack<int> &output){
    if (input.empty()){
        return output;
    }
    int element = input.top();
    input.pop();
    Copy_Stack_Recursion(input,output);
    output.push(element);
    return output;
}

stack<int> Copy_Stack(stack<int> &input){
    stack<int> temp;
    while(! input.empty()){
        int ele = input.top();
        input.pop();
        temp.push(ele);
    }
    stack<int> result;
    while(! temp.empty()){
        int ele = temp.top();
        temp.pop();
        result.push(ele);
    }
    return result;
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    stack<int> copy_st = Copy_Stack(st);
    while(! copy_st.empty()){
        cout<<copy_st.top()<<endl;
        copy_st.pop();
    }
    cout<<"___________________"<<endl<<endl;
    stack<int> st2;
    st2.push(1);
    st2.push(2);
    st2.push(3);
    st2.push(4);
    stack<int> copy_st2;
    Copy_Stack_Recursion(st2,copy_st2);
    while(! copy_st2.empty()){
        cout<<copy_st2.top()<<endl;
        copy_st2.pop();
    }
}