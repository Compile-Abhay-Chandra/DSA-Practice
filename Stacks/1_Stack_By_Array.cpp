//
#include<iostream>
#include<climits>
using namespace std;

class Stack {

    int capacity;
    int* arr;
    int top;

public:
    Stack(int c){
        capacity = c;
        arr = new int[c];
        top = -1;
    }

    void push(int val){
        if (top == capacity - 1){
            cout<<"Overflow\n";
            return;
        }
        top++;
        arr[top] = val;
    }

    int pop(){
        if(top == -1){
            cout<<"Underflow\n";
            return INT_MIN;
        }
        top--;
    }

    int get_top(){
        if(top == -1){
            cout<<"Underflow\n";
            return INT_MIN;
        }
        return arr[top]; 
    }

    bool IsEmpty(){
        return top == -1;
    }

    bool IsFull(){
        return top == capacity-1;  
    }

    int size(){
        return top + 1;
    }



};

int main(){

    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.get_top()<<endl;
    s.push(4);
    s.push(5);
    cout<<s.get_top()<<endl;
    s.push(6);
    s.pop();
    s.pop();
    cout<<s.get_top();
} 