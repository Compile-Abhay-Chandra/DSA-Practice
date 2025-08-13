#include<iostream>
#include<vector>
#include<stack>
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

vector<int> Spiral_Order(Node* root){
    stack<Node*> R_to_L;
    stack<Node*> L_to_R;

    R_to_L.push(root);
    vector<int> ans;
    while(!R_to_L.empty() || !L_to_R.empty()){
        if(!R_to_L.empty()){
            while(!R_to_L.empty()){
                Node* temp = R_to_L.top();
                R_to_L.pop();
                ans.push_back(temp->val);
                if(temp->right){
                    L_to_R.push(temp->right);
                }
                if(temp->left){
                    L_to_R.push(temp->left);
                }

            }
        }
        else{
            while(!L_to_R.empty()){
                Node* temp = L_to_R.top();
                L_to_R.pop();
                ans.push_back(temp->val);
                if(temp->left){
                    R_to_L.push(temp->left);
                }
                if(temp->right){
                    R_to_L.push(temp->right);
                }
            }
        }
    }
    return ans;
}

int main(){

    cout<<"Enter the root node: ";
    Node* root;
    root = BinaryTree();
    vector<int> final_answer = Spiral_Order(root);
    for(int i=0 ; i<final_answer.size(); i++){
        cout<<final_answer[i]<<",";
    }
}