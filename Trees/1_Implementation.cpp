#include<iostream>
#include<vector>
#include<queue>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;

    Node(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};

int main(){
    int x;
    int first , second;
    cout<<"Enter the root element: ";
    cin>>x;
    queue<Node*> q;
    Node* root = new Node(x);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cout<<"Enter the left child of "<<temp->val<<": ";
        cin>>first;
        if(first!=-1){
            temp->left = new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter the right child of "<<temp->val<<": ";
        cin>>second;
        if(second != -1){
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }

}