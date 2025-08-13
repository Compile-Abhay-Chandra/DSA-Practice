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

class LinkedList{
public:
    Node* head;
    LinkedList(){
        head = NULL;
    }

    void InsertAtHead(int val){
        Node* New_Node = new Node(val);
        New_Node->next = head;
        head = New_Node;
    }

    void Display(){
        Node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void UniqueElement(){
        if (head==NULL){
            return;
        }
        Node* temp = head;
        while (temp->next != NULL){
            if(temp->val == temp->next->val){
                Node* del = temp->next;
                temp->next = temp->next->next;
                delete del;
            }
            else{
                temp = temp->next;
            }
        }

    }

};

int main(){

    LinkedList ll;
    ll.InsertAtHead(5);
    ll.InsertAtHead(5);
    ll.InsertAtHead(3);
    ll.InsertAtHead(3);
    ll.InsertAtHead(1);
    ll.Display();
    ll.UniqueElement();
    ll.Display();
    

}