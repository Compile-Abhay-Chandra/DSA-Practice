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

bool Check_Palindrom(Node* &head){
    Node* slow = head;
    Node* fast = head;
    Node* Previous = NULL;
    Node* Current = NULL;
    Node* Next = NULL;
    while (fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    Current = slow;
    Current = Current->next;
    while (Current != NULL){
        Next = Current->next;
        Current->next = Previous;
        Previous = Current;
        Current = Next;
    }
    Node* First_Half = head;
    Node* Second_Half = Previous;
    while(Second_Half){
        if(First_Half->value != Second_Half->value){
            return false;
        }
        First_Half = First_Half->next;
        Second_Half = Second_Half->next;
    }
    return true;
    
}

int main(){
    LinkedList ll;
    ll.InsertAtTail(1);
    ll.InsertAtTail(2);
    ll.InsertAtTail(3);
    ll.InsertAtTail(4);
    ll.InsertAtTail(3);
    ll.InsertAtTail(2);
    ll.InsertAtTail(1);
    ll.Display();
    cout<<(Check_Palindrom(ll.head) ? "Yes" : "NO")<<endl;
}