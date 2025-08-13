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

class Queue{
    Node* head;
    Node* tail;
    int size = 0;
public:
    Queue(){
        head = NULL;
        tail = NULL;
    }

    void Enqueue(int val){
        Node* New_Node = new Node(val);
        if(head == NULL){
            head = New_Node;
            tail = New_Node;
            size++;
            return;
        }
        tail->next = New_Node;
        tail = New_Node;
        size++;
    }

    void Dequeue(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        if(head == NULL)   tail = NULL;
        temp->next = NULL;
        delete temp;
    }

    int GetSize(){
        return size;
    }

    bool IsEmpty(){
        return head == NULL;
    }

    int GetFront(){
        if(head == NULL) return -1;
        return head->val;
    }

};
int main(){
    Queue qu;
    qu.Enqueue(10);
    qu.Enqueue(20);
    qu.Enqueue(30);
    qu.Dequeue();
    qu.Enqueue(40);

    while(!qu.IsEmpty()){
        cout<<qu.GetFront()<<endl;
        qu.Dequeue();
    }
}