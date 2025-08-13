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

bool Is_Identical(Node* root1, Node* root2){
    if(root1 == NULL && root2 == NULL) return true;
    if((root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL)) return false;
    if(root1->val != root2->val) return false;
    return Is_Identical(root1->left,root2->left) && Is_Identical(root1->right,root2->right);
} 

int main(){

    cout<<"Enter the root node: ";
    Node* root1;
    Node* root2;
    root1 = BinaryTree();
    root2 = BinaryTree();
    cout<<Is_Identical(root1,root2);
}