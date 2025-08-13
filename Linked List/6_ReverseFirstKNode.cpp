#include<iostream>
using namespace std;
class Node{
public:
    int value;
    Node* next;
    Node(int data){
        value = data;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    LinkedList(){
        head = NULL;
    }

    void InsertAtTail(int val){
        
        Node* New_Node = new Node(val);

        if(head==NULL){
            head = New_Node;
            return;
        }

        Node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        temp->next = New_Node;
    }

    void Display(){
        Node* temp = head;
        while (temp!=NULL){
            cout<<temp->value<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void ReverseLinkedList(){
        Node* prev = NULL;
        Node* current = head;
        Node* Next = NULL;
        while(current!=NULL){
            Next = current->next;
            current->next = prev;
            prev = current;
            current = Next;
            
        }
        head = prev;
    }

};

Node* ReverseLLRecursion(Node* &head){
    if (head == NULL || head->next == NULL){
        return head;
    }

    Node* New_Head = ReverseLLRecursion(head->next);
    head->next->next = head;       // 1(head) --> [2 <-- 3 <-- 4 <-- 5 <-- 6]  , So head(1) ka next ka next will point to head(1) therefore [ 1--><-- 2 <-- 3 <-- 4 <-- 5 <-- 6 ] here 1 is pointing to 2 and 2 is pointing to 1
    head->next = NULL;             // Null <-- 1 <-- 2 <-- 3 <-- 4 <-- 5 <-- 6 , here 1 is pointing to NULL , previously 1 was pointing to 2
    return New_Head;
}

Node* ReverseKLL(Node* &head , int k){
    if (head == NULL || head->next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* current = head;
    Node* Next = NULL;
    int counter = 0;
    while(current != NULL && counter < k){
        Next = current->next;
        current->next = prev;
        prev = current;
        current = Next;
        counter++;
    }
    if(current != NULL){
    Node* New_Head = ReverseKLL(current,k);
    head->next = New_Head;
    }
    return prev;
}

int main(){
    LinkedList ll;
    ll.InsertAtTail(1);
    ll.InsertAtTail(2);
    ll.InsertAtTail(3);
    ll.InsertAtTail(4);
    ll.InsertAtTail(5);
    ll.InsertAtTail(6);
    ll.Display();
    ll.ReverseLinkedList();
    ll.Display();
    ll.head = ReverseLLRecursion(ll.head);
    ll.Display();
    ll.head = ReverseKLL(ll.head,3);
    ll.Display();
}