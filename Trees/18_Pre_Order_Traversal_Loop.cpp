#include<iostream>
#include<stack>
#include<vector>
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

Node* Binary_Tree(){
    int x;
    cin>>x;
    if(x == -1){
        return NULL;
    }
    Node* temp = new Node(x);
    cout<<"Enter the left child of "<<x<<": ";
    temp->left = Binary_Tree();
    cout<<"Enter the right child of "<<x<<": ";
    temp->right = Binary_Tree();
}

void Pre_Order_Traversal(Node* root){
    stack<Node*> s;
    vector<int>v;
    s.push(root);
    while(!s.empty()){
        Node* temp = s.top();
        s.pop();
        v.push_back(temp->val);
        if(temp->right){
            s.push(temp->right);
        }
        if(temp->left){
            s.push(temp->left);
        }
    }
    for(auto it : v){
        cout<<it<<" ";
    }

}

int main(){
    cout<<"Enter the root node: ";
    Node* root = Binary_Tree();
    Pre_Order_Traversal(root);
    return 0;
}