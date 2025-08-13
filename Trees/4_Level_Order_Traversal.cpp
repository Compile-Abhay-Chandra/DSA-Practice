#include <iostream>
#include<vector>
#include<queue>
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

vector<int> Level_Order_Traversal(Node* root){
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    Node* temp;
    while(!q.empty()){
        temp = q.front();
        q.pop();
        ans.push_back(temp->val);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    return ans;
}

int main(){
    cout<<"Enter the root node: ";
    Node* root;
    root = BinaryTree();
    vector<int> v;
    v = Level_Order_Traversal(root);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}