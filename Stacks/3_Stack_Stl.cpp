//
#include<iostream>
#include<climits> // INT_MAX , INT_MIN
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.top()<<endl;
    st.push(4);
    st.pop();
    st.pop();
    st.pop();
    cout<<st.top()<<endl;
}