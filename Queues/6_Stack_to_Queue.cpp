// this question can be solved using two methord one is push efficent(time complexity to push an element is O(1)) or pop efficient(time complexity to pop an element is O(1)) 
#include<iostream>
#include<stack>
using namespace std;

// push efficient
class Queue{
    stack<int> st;
public:
    Queue(){}

    void Push(int val){
        st.push(val);
    }

    void Pop(){
        if(st.empty()) return;
        stack<int> temp;
        while(st.size() != 1){
            temp.push(st.top());
            st.pop();
        }
        st.pop();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        }
    }

    bool IsEmpty(){
        return st.empty();
    }

    int Front(){
       if(st.empty()) return -1;
        stack<int> temp;
        while(st.size() != 1){
            temp.push(st.top());
            st.pop();
        }
        int Top = st.top();
        while(!temp.empty()){
            st.push(temp.top());
            temp.pop();
        } 
        return Top;
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