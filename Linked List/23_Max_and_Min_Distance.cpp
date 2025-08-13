/*
A critical point in a linked list is defined as either a local maxima or a local minima.
Given a linked list tail, return an array of length 2 containing [minDistance, maxDistance] where minDistance is the minimum distance
between any two distinct critical points and maxDistance is the maximum distance between any two distinct critical points.
If there are fewer than two critical points, return [-1, -1].

Note that a node can only be a local maxima/minima if there exists both a previous node and a next node.
*/
#include<iostream>
#include<vector>
#include<climits>
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

bool Check_Critical_Point(Node* &currentNode){
    if(currentNode->prev->val > currentNode->val && currentNode->next->val > currentNode->val){
        return true;
    }
    if(currentNode->prev->val < currentNode->val && currentNode->next->val < currentNode->val){
        return true;
    }
    return false;
}

vector<int> Distance_between_Critical_Points(Node* head,Node* tail){
    vector<int> ans(2,INT_MAX);
    int firstCP = -1 , lastCP = -1;

    Node* currentNode = tail->prev;
    if(currentNode == NULL){
        ans[0] = -1;
        ans[1] = -1;
        return ans;
    }
    int current = 0;
    while(currentNode->prev != NULL){
        if(Check_Critical_Point(currentNode)){
            if (firstCP == -1){
                firstCP = current;
                lastCP = current;
            }
            else{
                ans[0] = min(ans[0], current - lastCP);
                ans[1] = current - firstCP;
                lastCP = current;
            }
        }
        current++;
        currentNode = currentNode->prev;
    }
    if (ans[0] == INT_MAX){
        ans[0] = ans[1] = -1; 
    }
    return ans;
}

int main(){
    DoublyLinkedList dll;
    dll.InsertAtTail(1);
    dll.InsertAtTail(5);
    dll.InsertAtTail(4);
    dll.InsertAtTail(2);
    dll.InsertAtTail(6);
    dll.InsertAtTail(3);
    dll.Display();
    vector<int> ans = Distance_between_Critical_Points(dll.head,dll.tail);
    cout<<ans[0]<<" "<<ans[1]<<endl;
}