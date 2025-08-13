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

vector<int> Right_View(Node* root){
    vector<int> ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n = q.size();
        ans.push_back(q.front()->val);
        while(n--){
            Node* temp = q.front();
            q.pop();
            if(temp->right){
                q.push(temp->right);
            }
            if(temp->left){
                q.push(temp->left);
            }
        }
    }
    return ans;
}

void Right_View_Recursion(Node* root, int level, vector<int> &v){
    if(!root) return;
    if(level == v.size()) v.push_back(root->val);
    Right_View_Recursion(root->right,level+1,v);
    Right_View_Recursion(root->left,level+1,v);
}

int main(){

    cout<<"Enter the root node: ";
    Node* root;
    root = BinaryTree();
    vector<int> ans;
    ans = Right_View(root);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    Right_View_Recursion(root,0,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}