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

Node* Mirror_Image(Node* root){
    if(root == NULL) return NULL;
    Node* temp;
    temp = root->left;
    root->left = root->right;
    root->right = temp;
    Mirror_Image(root->left);
    Mirror_Image(root->right);
    return root;
}

int main(){

    cout<<"Enter the root node: ";
    Node* root;
    root = BinaryTree();
    Pre_order(root);
    cout<<endl;
    Node* ans = Mirror_Image(root);
    Pre_order(ans);

}