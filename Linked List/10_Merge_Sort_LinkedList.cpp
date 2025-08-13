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

Node* Merge_Sort(Node* head1,Node* head2){

    Node* DummyHeadNode = new Node(-1);
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* ptr3 = DummyHeadNode;


    while (ptr1 != NULL && ptr2 != NULL){
        if (ptr1->value < ptr2->value){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    if(ptr1){                           // it works because we point the last node of DummyHeadNode to the rest of the remaining node.
        ptr3->next = ptr1;
    }

    if(ptr2){
        ptr3->next = ptr2;
    }
    Node* temp = DummyHeadNode;
    DummyHeadNode = DummyHeadNode->next;
    delete temp;
    return DummyHeadNode;
}


int main(){
    LinkedList ll;
    LinkedList LL;
    LinkedList Sorted;
    ll.InsertAtTail(1);
    LL.InsertAtTail(2);
    ll.InsertAtTail(3);
    LL.InsertAtTail(4);
    ll.InsertAtTail(5);
    LL.InsertAtTail(6);
    LL.InsertAtTail(7);
    LL.InsertAtTail(8);
    LL.InsertAtTail(9);
    Sorted.head = Merge_Sort(ll.head,LL.head);
    Sorted.Display();
    
}