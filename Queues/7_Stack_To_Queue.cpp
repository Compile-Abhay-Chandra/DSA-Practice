// pop efficient
#include<iostream>
#include<stack>
using namespace std;

// push efficient
class Queue{
    stack<int> st;
public:
    Queue(){}

    void Push(int val){
        stack<int> temp;
        while(!st.empty()){
            temp.push(st.top());
            st.pop();
        }
        st.push(val);
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }

    void Pop(){
        if(st.empty()) return;
        st.pop();
    }

    bool IsEmpty(){
        return st.empty();
    }

    int Front(){
        if(st.empty()) return -1;
       return st.top();
    }
};

int main(){
    Queue q;
    q.Push(1);
    q.Push(2);
    q.Push(3);
    cout << "Front element: " << q.Front() << endl; // Should print 1
    q.Pop();
    cout << "Front element: " << q.Front() << endl; // Should print 2
    q.Pop();
    cout << "Front element: " << q.Front() << endl; // Should print 3
    q.Pop();
    cout << "Queue is empty: " << (q.IsEmpty() ? "Yes" : "No") << endl; // Should print Yes
    return 0;
}