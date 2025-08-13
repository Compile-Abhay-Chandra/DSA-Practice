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

class CircularLinkedList{
public:
    Node* head;

    CircularLinkedList(){
        head = NULL;
    }

    void InsertAtStart(int val){
        Node* New_Node = new Node(val);

        if(head==NULL){
            head = New_Node;
            New_Node->next = head;
            return; 
        }

        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }
        temp->next = New_Node;
        New_Node->next = head;
        head = New_Node;
    }

    void InserAtEnd(int val){
        Node* New_Node = new Node(val);

        if(head==NULL){
            head = New_Node;
            New_Node->next = head;
            return; 
        }

        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        tail->next = New_Node;
        New_Node->next = head;
    }

    void InserAtK(int val, int pos){
        
        if (pos==0){
            InsertAtStart(val);
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

    void DeleteAtStart(){
        Node* temp = head;
        Node* tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        tail->next = temp->next;
        head = temp->next;
        delete temp;
    }

    void DeleteAtEnd(){
        Node* temp = head;
        Node* tail = head;
        while(tail->next->next != head){
            tail = tail->next;
        }
        Node* end = tail->next;
        tail->next = temp;
        delete end;
    }

    void DeleteAtPosition(int pos){

        if(head==NULL){
            return;
        }
        if(pos==0){
            DeleteAtStart();
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

    void Display(){
        Node* temp = head;
        do{
            cout<<temp->val<<"->";
            temp = temp->next;
        }while(temp != head);

        cout<<"head"<<endl;
    }

};

int main(){
    CircularLinkedList cll;
    cll.InsertAtStart(1);
    cll.InsertAtStart(2);
    cll.InsertAtStart(3);
    cll.InsertAtStart(4);
    cll.InsertAtStart(5);
    cll.InsertAtStart(6);
    cll.Display();
    cll.InserAtEnd(7);
    cll.InserAtEnd(8);
    cll.InserAtEnd(9);
    cll.Display();
    cll.InserAtK(77,7);
    cll.Display();
    cll.DeleteAtStart();
    cll.Display();
    cll.DeleteAtEnd();
    cll.Display();
    cll.DeleteAtPosition(6);
    cll.Display();
}