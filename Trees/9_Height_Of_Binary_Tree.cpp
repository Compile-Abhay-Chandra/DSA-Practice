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

int Height(Node* root){
    if (root == NULL) return 0;
    return 1 + max(Height(root->left),Height(root->right));
}

int main(){

    cout<<"Enter the root node: ";
    Node* root;
    root = BinaryTree();
    cout<<Height(root);
}