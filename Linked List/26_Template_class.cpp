#include<iostream>
using namespace std;

template <typename T>
class Node{ // template class
public:
    T val;
    Node* next;

    Node(T data){
        val = data;
        next = NULL;
    }
};

int main(){
    Node<int>* Node1 = new Node<int> (3);
    cout<<Node1->val<<endl;

    Node<char>* Node2 = new Node<char> ('a');
    cout<<Node2->val<<endl;
}