#include<iostream>
#include<map>
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

void Top_View(Node* root){
    queue<pair<Node*,int>>q;
    map<int,int> m;
    q.push({root,0});
    while(!q.empty()){
        Node* temp = q.front().first;
        int H_D = q.front().second;
        q.pop();
        if(m.find(H_D) == m.end()){
            m[H_D] = temp->val;
        }
        if(temp->left){
            q.push({temp->left,H_D-1});
        }
        if(temp->right){
            q.push({temp->right,H_D+1});
        }
    }
    for(auto it : m){
        cout<<it.second<<"";
    }
}

int main(){

    cout<<"Enter the root node: ";
    Node* root;
    root = BinaryTree();
    Top_View(root);

}