// Basic code of single linked list
#include<iostream>
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

void InsertAtHead(Node* &head, int val){

    Node* New_Node = new Node (val);
    New_Node->next = head;
    head = New_Node;
    
}

void InsertAtTail(Node* &head , int val){

    Node* New_Node = new Node(val);

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = New_Node;

}

void InsertAtPosition(Node* &head, int val, int pos){

    if (pos==0){
        InsertAtHead(head,val);
    }
    Node* New_Node = new Node(val);
    Node* temp = head;
    int Current_Position = 0;
    while(Current_Position != pos - 1){
        temp = temp->next;
        Current_Position++;
    }
    New_Node->next = temp->next;
    temp->next = New_Node;

}

void UpdateAtPosition(Node* &head, int val, int pos){

    Node* temp = head;
    int Current_Position = 0;
    while(Current_Position != pos){
        temp = temp->next;
        Current_Position++;
    }
    temp->val = val;

}

void DeleteAtHead(Node* &head){

    if (head==NULL){
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

void DeleteAtTail(Node* &head){

    if (head==NULL){
        return;
    }
    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }
    Node* Second_Last = head;
    while(Second_Last->next->next != NULL){
        Second_Last = Second_Last->next;
    }
    Node* temp = Second_Last->next;
    Second_Last->next = NULL;
    delete temp;

}

void DeleteAtPosition(Node* &head, int pos){

    if(head==NULL){
        return;
    }
    if(pos==0){
        DeleteAtHead(head);
        return;
    }

    Node* Previous_Position = head;
    int Current_Position = 0;
    while (Current_Position != pos-1 && Previous_Position->next != NULL){
        Previous_Position = Previous_Position->next;
        Current_Position++;
    }
    if(Previous_Position->next == NULL){
        cout<<"Position Out Of Bound!!"<<endl;
        return;
    }
    Node* temp = Previous_Position->next;
    Previous_Position->next = temp->next;
    delete temp;

}

void Display(Node* head){

    Node* temp = head;
    while (temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

}

int main(){

    Node* head = NULL;
    InsertAtHead(head,5);
    Display(head);
    InsertAtHead(head,7);
    Display(head);
    InsertAtTail(head,9);
    Display(head);
    InsertAtPosition(head,6,1);
    Display(head);
    UpdateAtPosition(head,4,3);
    Display(head);
    DeleteAtHead(head);
    Display(head);
    DeleteAtTail(head);
    Display(head);
    DeleteAtPosition(head,1);
    Display(head);
    

} 