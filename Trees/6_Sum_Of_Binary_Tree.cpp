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

void Binary_Tree_Sum1(Node* root, int &sum){
    if(root == NULL) return;
    sum += root->val;
    Binary_Tree_Sum1(root->left,sum);
    Binary_Tree_Sum1(root->right,sum);
}

int Binary_Tree_Sum2(Node* root){
    if(root == NULL) return 0;
    return (root->val + Binary_Tree_Sum2(root->left) + Binary_Tree_Sum2(root->right));
    
}

int main(){

    cout<<"Enter the root node: ";
    Node* root;
    root = BinaryTree();
    int ans = 0;
    Binary_Tree_Sum1(root,ans);
    cout<<ans<<endl;
    cout<<Binary_Tree_Sum2(root);
}