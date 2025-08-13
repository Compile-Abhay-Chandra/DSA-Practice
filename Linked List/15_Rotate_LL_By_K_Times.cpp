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

void Rotate(Node* &head, int k){
    int n = k;
    int size = 1;
    Node* temp = head;
    Node* temp2 = head;
    while(temp->next!=NULL){
        size++;
        temp = temp->next;
    }
    n = n%size;
    if(n==0){
        return;
    }
    temp->next = head;

    for(int i=0; i<size-n-1;i++){
        temp2 = temp2->next;
    }
    head = temp2->next;    
    temp2->next = NULL;

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
    Rotate(ll.head,3);
    ll.Display();
}