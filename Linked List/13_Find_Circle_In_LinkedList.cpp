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

bool Check_Circle(Node* head){

    if(!head){
        return false;
    }

    Node* slow = head;
    Node* fast = head;
    
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }

    return false;
}

void Remove_Cycle(Node* &head){
    Node* slow = head;
    Node* fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    slow = head;
    while (slow->next != fast->next){
        slow = slow->next;
        fast = fast->next;
    }
    
    fast->next = NULL;

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
    ll.head->next->next->next->next->next->next = ll.head->next->next;
    cout<<(Check_Circle(ll.head) ? "True": "False")<<endl;
    Remove_Cycle(ll.head);
    ll.Display();
}