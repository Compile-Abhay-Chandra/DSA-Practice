// Height of left side - Height of right side = (-1,0,1) -> Balanced
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

int height(Node* root, bool &valid){
    if(root == NULL) return 0;
    int Left = height(root->left,valid);
    int Right = height(root->right,valid); 
    if(abs(Left-Right) > 1){
        valid = false;
    }
    return 1 + max(Left,Right);
}

bool Balanced(Node* root){
    bool valid = true;
    height(root,valid);
    return valid;
}

int main(){

    cout<<"Enter the root node: ";
    Node* root;
    root = BinaryTree();
    cout<<Balanced(root);
}