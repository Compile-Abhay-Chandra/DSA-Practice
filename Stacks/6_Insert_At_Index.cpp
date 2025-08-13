//
#include<iostream>
#include<climits> // INT_MAX , INT_MIN
#include<stack>
using namespace std;

void Insert_At_Index(stack<int> &s, int num,int index){

    stack<int>temp;
    int size = s.size();

    if(index<0 || index>size){
        cout<<"Invalid Index"<<endl;
        return;
    }

    for(int i = 0; i<size-index; i++){
        temp.push(s.top());
        s.pop();
    }
    s.push(num);
    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }

}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    Insert_At_Index(st,0,2);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}