#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int data){
        val = data;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList{
public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void InsertAtHead(int val){
        Node* New_Node = new Node(val);
        if (!head){
            head = New_Node;
            tail = New_Node;
            return;
        }
        New_Node->next = head;
        head->prev = New_Node;
        head = New_Node;
    }

    void InsertAtTail(int val){
        
        Node* New_Node = new Node(val);

        if(head==NULL){
            head = New_Node;
            tail = New_Node;
            return;
        }

        tail->next = New_Node;
        New_Node->prev = tail;
        tail = New_Node;
    }

    void InsertAtK(int val , int k){
        Node* New_Node = new Node(val);
        if(k==1){
            InsertAtHead(val);
            return;
        }
        Node* temp = head;
        int position = 1;
        while(position != k){
            temp = temp->next;
            position++;
        }
        New_Node->next = temp->next;
        temp->next->prev = New_Node;
        temp->next = New_Node;
        New_Node->prev = temp;
    }

    void DeleteAtHead(){
        if(!head){
            return;
        }
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }

    void DeleteAtTail(){
        if(!tail){
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }

    void DeleteAtK(int pos){
        Node* temp = head;
        int current = 1;
        while (current != pos-1){
            temp = temp->next;
            current++;
        }
        temp->next = temp->next->next;
        temp->next->prev = temp;
    }

    void Display(){
        Node* temp = head;
        while (temp!=NULL){
            cout<<temp->val<<" <-> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }             

    void ReverseDisplay(){
        Node* temp = tail;
        while (temp!=NULL){
            cout<<temp->val<<" <-> ";
            temp = temp->prev;
        }
        cout<<"NULL"<<endl;             
    }


};

Node* Reverse(Node* &head, Node* &tail){
    Node* current = head;
    while(current){
        Node* Next = current->next;
        current->next = current->prev;
        current->prev = Next;
        current = Next;
    }
    Node* New_Head = tail;
    tail = head;
    head = New_Head;
}

int main(){
    DoublyLinkedList dll;
    dll.InsertAtTail(1);
    dll.InsertAtTail(2);
    dll.InsertAtTail(3);
    dll.InsertAtTail(4);
    dll.InsertAtTail(5);
    dll.InsertAtTail(6);
    dll.Display();
    Reverse(dll.head,dll.tail);
    dll.Display();
}