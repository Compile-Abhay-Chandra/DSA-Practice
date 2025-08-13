/*
You are given the head of a singly linked-list. The list can be represented as:

LO->L1->...→ Ln-1-Ln

Reorder the list to be on the following form:

LO->Ln->L1->Ln-1->L2->Ln-2→...
*/

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

    Node* previous = NULL;

    void Reverse(){
        Node* Slow = head;
        Node* Fast = head;
        Node* Break = NULL;
        while(Fast != NULL && Fast->next != NULL){
            Break = Slow;
            Slow = Slow->next;
            Fast = Fast->next->next;
        }
        Break->next = NULL;
        Node* Previous = NULL;
        Node* Current = Slow;
        Node* Next = NULL;
        while(Current!=NULL){
            Next = Current->next;
            Current->next = Previous;
            Previous = Current;
            Current = Next;
        }
        previous = Previous;
    }

    void Rearrange(){
        Node* Start = head;
        Node* Start_Next = NULL;
        Node* End = previous;
        Node* End_Next = NULL;
        while(Start != NULL){
            Start_Next = Start->next;
            End_Next = End->next;
            Start->next = End;
            End->next = Start_Next;
            Start = Start_Next;
            End = End_Next;
        }
    }
};

int main(){
    LinkedList ll;
    ll.InsertAtTail(1);
    ll.InsertAtTail(2);
    ll.InsertAtTail(3);
    ll.InsertAtTail(4);
    ll.InsertAtTail(5);
    ll.InsertAtTail(6);
    ll.Display();
    ll.Reverse();
    ll.Rearrange();
    ll.Display();

}