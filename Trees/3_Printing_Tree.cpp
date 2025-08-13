#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int data){
        left = NULL;
        right = NULL;
        val = data;
    }
};

Node* BinaryTree(){
    int x;
    cin>>x;
    if (x == -1){
        return NULL;
    }
    Node* temp = new Node(x);
    //left->node
    cout<<"Enter the left child of "<<x<<": ";
    temp->left = BinaryTree();
    //right->node
    cout<<"Enter the right child of "<<x<<": ";
    temp->right = BinaryTree();
    return temp;
}

void Pre_order(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    Pre_order(root->left);
    Pre_order(root->right);
}

void In_order(Node* root){
    if(root==NULL) return;
    In_order(root->left); 
    cout<<root->val<<" ";
    In_order(root->right);
} 

void Post_order(Node* root){
    if(root==NULL) return;
    Post_order(root->left); 
    Post_order(root->right);
    cout<<root->val<<" ";
}  

int main(){
    cout<<"Enter the root node: ";
    Node* root;
    root = BinaryTree();
    Pre_order(root);
    In_order(root);
    Post_order(root);
}