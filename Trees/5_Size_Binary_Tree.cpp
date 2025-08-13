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

void Height(Node* root , int &count){
    if(root == NULL) return;
    count++;
    Height(root->left,count);
    Height(root->right,count);
}

int Total_Node(Node* root){
    if(root == NULL) return 0;
    return (1 + Total_Node(root->left) + Total_Node(root->right));
}

int main(){

    cout<<"Enter the root node: ";
    Node* root;
    root = BinaryTree();
    int count = 0;
    Height(root,count);
    cout<<count<<endl;
    cout<<Total_Node(root);
}