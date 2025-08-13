//
#include<iostream>
#include<climits>
using namespace std;

class Node{
public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

class Stack{
    Node* head;
    int capacity;
    int currentSize;

public:
    Stack(int c){
        capacity = c;
        currentSize = 0;
        head = NULL;
    }

    bool IsEmpty(){
        return head == NULL;
    }

    bool IsFull(){
        return currentSize == capacity;
    }

    void Push(int val){

        if(IsFull()){
            cout<<"Overflow\n";
            return;
        }

        Node* New_Node = new Node(val);
        // if(head == NULL){
        //     head = New_Node ;
        //     return;
        // }
        New_Node->next = head;
        head = New_Node;
        currentSize++;

    }

    int pop(){
        if(head == NULL){
            cout<<"Underflow\n";
            return INT_MIN;
        }
        Node* temp = head;
        head->next = NULL;
        Node* element_to_be_deleted = head;
        head = temp->next;
        int result = element_to_be_deleted->val;
        delete element_to_be_deleted;
        currentSize--;
        return result;
    }

    int Get_Top() {
        if(head == NULL){
            cout<<"Underflow\n";
            return INT_MIN;
        }
        return head->val;
    }

    int Size(){
        return currentSize;
    }
};

int main(){

    Stack s(5);
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.Push(4);
    cout<<s.Get_Top();
    s.Push(5);

}