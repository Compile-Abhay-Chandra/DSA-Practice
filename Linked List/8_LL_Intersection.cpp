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

Node* Intersection(Node* head1, Node*head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    int size1 = 0;
    int size2 = 0;
    while(temp1!=NULL){
        temp1 = temp1->next;
        size1++;
    }
    while(temp2!=NULL){
        temp2 = temp2->next;
        size2++;
    }

    int size = size1-size2;             // given size 1 > size 2
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    while(size!=0){
        ptr1 = ptr1->next;
        size--;
    }

    while (ptr1!=NULL && ptr2!=NULL){
        if (ptr1 == ptr2){
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;
}


int main(){
    LinkedList ll;
    ll.InsertAtTail(1);
    ll.InsertAtTail(2);
    ll.InsertAtTail(3);
    ll.InsertAtTail(4);
    ll.InsertAtTail(5);

    LinkedList ll2;
    ll2.InsertAtTail(6);
    ll2.InsertAtTail(7);
    ll2.head->next->next = ll.head->next->next->next;

    Node* Common = Intersection(ll.head,ll2.head);
    if (Common){
        cout<<Common->value<<endl;
    }

}