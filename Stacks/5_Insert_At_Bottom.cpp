//
#include<iostream>
#include<climits> // INT_MAX , INT_MIN
#include<stack>
using namespace std;

void Insert_At_Bottom_Recursion(stack<int> &input , int num){
    if (input.empty()){
        input.push(num);
        return;
    }
    int element = input.top();
    input.pop();
    Insert_At_Bottom_Recursion(input,num);
    input.push(element);
    return ;
}

void Insert_At_Bottom(stack<int> &s, int num){

    stack<int>temp;
    while(!s.empty()){
        int a = s.top();
        s.pop();
        temp.push(a);
    }
    s.push(num);
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
    Insert_At_Bottom_Recursion(st,0);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}