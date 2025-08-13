// leaf node -> the node which does no have any child.
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

void Leaf_Node1(Node* root, int &count){
    if(root == NULL){
        return ;
    }

    if(root->left == NULL && root->right == NULL){
        count++;
        return ;
    }
    Leaf_Node1(root->left,count);
    Leaf_Node1(root->right,count);
}

int Leaf_Node2(Node* root){
    if(root == NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        return 1;
    }

    return Leaf_Node2(root->left) + Leaf_Node2(root->right);
}

int main(){

    cout<<"Enter the root node: ";
    Node* root;
    root = BinaryTree();
    int count = 0;
    Leaf_Node1(root,count);
    cout<<count<<endl;
    cout<<Leaf_Node2(root)<<endl;
    
}