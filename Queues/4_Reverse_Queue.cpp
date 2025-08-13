#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void Reverse(queue<int> &qu){
    stack<int> st;
    while(!qu.empty()){
        st.push(qu.front());
        qu.pop();
    }
    while(!st.empty()){
        qu.push(st.top());
        st.pop();
    }
}

int main(){
    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.push(50);
    qu.push(60);
    qu.push(70);
    // while(!qu.empty()){
    //     cout<<qu.front()<<endl;
    //     qu.pop();
    // }
    Reverse(qu);
    while(!qu.empty()){
        cout<<qu.front()<<endl;
        qu.pop();
    }
}