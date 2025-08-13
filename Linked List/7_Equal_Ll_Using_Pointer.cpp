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

bool CheckEqualLinkedList(Node* head1, Node* head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    while (ptr1!=NULL && ptr2!=NULL){
        if(ptr1->value != ptr2->value){
            return false;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return (ptr1==NULL && ptr2==NULL);
}


int main(){

    LinkedList ll1;
    ll1.InsertAtTail(1);
    ll1.InsertAtTail(2);
    ll1.InsertAtTail(3);
    ll1.InsertAtTail(4);
    ll1.InsertAtTail(5);
    ll1.InsertAtTail(6);
    ll1.Display();

    LinkedList ll2;
    ll2.InsertAtTail(1);
    ll2.InsertAtTail(2);
    ll2.InsertAtTail(3);
    ll2.InsertAtTail(4);
    ll2.InsertAtTail(5);
    ll2.InsertAtTail(6);
    ll2.Display();

    cout<<CheckEqualLinkedList(ll1.head,ll2.head);


}