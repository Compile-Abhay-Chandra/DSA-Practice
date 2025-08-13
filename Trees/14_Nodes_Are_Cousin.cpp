#include<iostream>
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

bool Same_Level(Node* root,int a, int b){
    queue<Node*> q;
    q.push(root);
    int level = 0;
    int l1 = -1;
    int l2 = -1;
    while(!q.empty()){
        int n = q.size();
        while(n--){
            Node* temp = q.front();
            q.pop();
            if(temp->val == a){
                l1 = level;
            }
            if(temp->val == b){
                l2 = level;
            }
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        level++;
        if (l1 != -1 && l2 != -1){
            return l1 == l2;
        }   
    }
    return false;
}

bool Not_Parent(Node* root, int a , int b){
    if(!root){
        return true;
    }
    if(root->left && root->right){
        if(root->left->val == a && root->right->val == b){
            return false;
        }
        if(root->left->val == b && root->right->val == a){
            return false;
        }
    }
    return Not_Parent(root->left,a,b) && Not_Parent(root->right,a,b);
}

bool is_cousin(Node* root, int a, int b){
    return Same_Level(root,a,b) && Not_Parent(root,a,b);
}

int main(){

    cout<<"Enter the root node: ";
    Node* root;
    root = BinaryTree();
    int a = 4;
    int b = 7;
    cout<<is_cousin(root,a,b);

}