/*
Given the head of a doubly linked list. The values of the linked list are sorted in non-decreasing order.
Find if there exists a pair of distinct nodes such that the sum of their values is x.
Return the pair in the form of a vector [I, r], where I and r are the values stored in the 2 nodes pointed by the pointers.
If there are multiple such pairs, return any of them. If there is no such pair return [-1,-1].
*/
#include<iostream>
#include<vector>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node(int data){
        val = data;
        next = NULL;
        prev = NULL;
    }
};

class DoublyLinkedList{
public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head = NULL;
        tail = NULL;
    }

    void InsertAtHead(int val){
        Node* New_Node = new Node(val);
        if (!head){
            head = New_Node;
            tail = New_Node;
            return;
        }
        New_Node->next = head;
        head->prev = New_Node;
        head = New_Node;
    }

    void InsertAtTail(int val){
        
        Node* New_Node = new Node(val);

        if(head==NULL){
            head = New_Node;
            tail = New_Node;
            return;
        }

        tail->next = New_Node;
        New_Node->prev = tail;
        tail = New_Node;
    }

    void InsertAtK(int val , int k){
        Node* New_Node = new Node(val);
        if(k==1){
            InsertAtHead(val);
            return;
        }
        Node* temp = head;
        int position = 1;
        while(position != k){
            temp = temp->next;
            position++;
        }
        New_Node->next = temp->next;
        temp->next->prev = New_Node;
        temp->next = New_Node;
        New_Node->prev = temp;
    }

    void DeleteAtHead(){
        if(!head){
            return;
        }
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }

    void DeleteAtTail(){
        if(!tail){
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }

    void DeleteAtK(int pos){
        Node* temp = head;
        int current = 1;
        while (current != pos-1){
            temp = temp->next;
            current++;
        }
        temp->next = temp->next->next;
        temp->next->prev = temp;
    }

    void Display(){
        Node* temp = head;
        while (temp!=NULL){
            cout<<temp->val<<" <-> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;             //Note : NULL cannot point to anything, here it for representation purpose only.
    }

    void ReverseDisplay(){
        Node* temp = tail;
        while (temp!=NULL){
            cout<<temp->val<<" <-> ";
            temp = temp->prev;
        }
        cout<<"NULL"<<endl;             //Note : NULL cannot point to anything, here it for representation purpose only.
    }


};

vector<int> Target_Sum(Node* head, Node* tail, int k){
    Node* left = head;
    Node* right = tail;
    vector<int> ans(2,-1);
    while(left != right){
        if(left->val + right->val == k){
            ans[0] = left->val;
            ans[1] = right->val;
            return ans;
        }
        else if (left->val + right->val > k){
            right = right->prev;
        }
        else{
            left = left->next;
        }
    }
    return ans;
}

int main(){
    DoublyLinkedList dll;
    // dll.InsertAtTail(1);
    dll.InsertAtTail(2);
    dll.InsertAtTail(5);
    dll.InsertAtTail(6);
    dll.InsertAtTail(8);
    dll.InsertAtTail(10);
    dll.Display();
    vector<int> ans = Target_Sum(dll.head,dll.tail,11);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}