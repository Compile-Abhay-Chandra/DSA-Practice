// Delete alternate elements in single linked list
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

void InsertElementHead(Node* &head, int val){
    Node* New_Node = new Node(val);
    New_Node->next = head;
    head = New_Node;
}

void DeleteElementAtK(Node* &head,int pos){
    int Current_Position=0;
    Node* temp = head;
    while (Current_Position != pos-1){
        Current_Position++;
        temp = temp->next;
    }
    Node* ELement_To_Delete = temp->next;
    temp->next = temp->next->next;
    delete ELement_To_Delete;

}

void DeleteAlternateElement(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        Node* Delete_Temp = temp->next;
        temp->next = temp->next->next;
        delete Delete_Temp;
        temp = temp->next;
    }
}

void Display(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"Null"<<endl;
}

int main(){
    Node* head = NULL;
    for(int i=10;i>0;i--){
        InsertElementHead(head,i);
    }
    Display(head);
    DeleteAlternateElement(head);
    Display(head);
    
}