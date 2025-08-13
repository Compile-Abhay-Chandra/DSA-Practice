// we basically take 2 pointers and move the 2nd pointer k steps ahead of pointer 1
// when the next of 2nd pointer is pointing to NULL the 1st pointer is pointing to the previous node of the Kth node fromm the last
// then point the node of pointer 1 to the the next of next of pointer 1;
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

    // assuming k is less than the length of the linked list.
    void RemoveKtnFromEnd(int pos){
        if (head==NULL || pos<=0){
            return;
        }

        Node* ptr1 = head;
        Node* ptr2 = head;
        int size = pos;

        while (size-- ){
            ptr2 = ptr2->next;
        }

        if (size>0){
            cout<<"Position exceeds the list length"<<endl;
            return;
        }
        
        if (ptr2 == NULL){
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        while(ptr2->next!=NULL){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        Node* temp = ptr1->next;
        ptr1->next = ptr1->next->next;
        delete temp;
        
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
    ll.RemoveKtnFromEnd(6);
    ll.Display();
}