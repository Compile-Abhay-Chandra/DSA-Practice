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


};

void Seperate_Odd_and_Even(Node* &head){
    Node* Odd = head;
    Node* Even = head->next;
    Node* Second_Head = Even;
    while(Even != NULL && Even->next != NULL){
        Odd->next = Odd->next->next;
        Odd = Odd->next;
        Even->next = Even->next->next;
        Even = Even->next;
    }
    Odd->next = Second_Head;

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
    Seperate_Odd_and_Even(ll.head);
    ll.Display();

}