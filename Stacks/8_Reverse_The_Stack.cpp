// you can do the same using iteration it is same as copying the element
// just take two temp stack . tansfer all the element from.
// orignal stack -> temp1 -> temp2 -> orignal stack

// note: reverse the elements in the orignal stack.

#include<iostream>
#include<climits> // INT_MAX , INT_MIN
#include<stack>
using namespace std;

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

void Reverse_Stack_By_Recursion(stack<int> &s){
    if(s.empty()){
        return;
    }
    int element = s.top();
    s.pop();
    Reverse_Stack_By_Recursion(s);
    Insert_At_Bottom(s,element);
    return;

}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    Reverse_Stack_By_Recursion(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}