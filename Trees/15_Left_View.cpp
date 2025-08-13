#include<iostream>
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

vector<int> Left_View(Node* root){
    if (!root) return {};
    queue<Node*> q;
    vector<int> v;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        v.push_back(q.front()->val);
        while(n--){
            Node* temp = q.front();
            q.pop();
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    return v;
}

void L_View_Recursion(Node* root, int level, vector<int> &v){
    if(!root) return;
    if(level == v.size()){
        v.push_back(root->val);
    }
    L_View_Recursion(root->left,level+1,v);
    L_View_Recursion(root->right,level+1,v);
}

int main(){

    cout<<"Enter the root node: ";
    Node* root;
    root = BinaryTree();
    vector<int> ans1 = Left_View(root);
    vector<int> ans2;
    L_View_Recursion(root,0,ans2);
    for(int i=0;i<ans1.size();i++){
        cout<<ans1[i]<<" ";
    }
    for(int i=0;i<ans2.size();i++){
        cout<<ans2[i]<<" ";
    }

}