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
        left = right = NULL;
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
    return temp;
}

void In_Order_Traversal(Node* root){
    if(root == NULL) cout<<"Empty Tree";
    stack<Node*> s;
    stack<bool> visited;
    vector<int>v;
    s.push(root);
    visited.push(0);
    while(!s.empty()){
        Node* temp = s.top();
        bool flag = visited.top();
        s.pop();
        visited.pop();
        if(!flag){
            if(temp->right){
                s.push(temp->right);
                visited.push(0);
            }
            s.push(temp);
            visited.push(1);
            if(temp->left){
                s.push(temp->left);
                visited.push(0);
            }
        }else{
            v.push_back(temp->val);
        }
    }
    for(auto it : v){
        cout<<it<<' ';
    }
}

int main(){
    cout<<"Enter the root node: ";
    Node* root = Binary_Tree();
    In_Order_Traversal(root);
    return 0;
}