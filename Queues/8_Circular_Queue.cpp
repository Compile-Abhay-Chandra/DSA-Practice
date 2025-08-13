#include<iostream>
#include<vector>
using namespace std;

class Queue{
    int front;
    int back;
    vector<int> v;
    int ts;
    int cs;
public:
    Queue(int n){
        ts = n;
        cs = 0;
        v.resize(n);
        front = 0;
        back = n-1;
    }

    void enqueue(int val){
        if(IsFull()) return;
        back = (back + 1)%ts;
        v[back] = val;
        cs++;
    }

    void denqueue(){
        if(IsEmpty()) return;
        front = (front+1)%ts;
        cs--;
    }

    int GetFront(){
        if(front == -1) return -1;
        return v[front];
    }

    bool IsEmpty(){
        return front == -1;
    } 

    bool IsFull(){
        return cs == ts;
    }
};

int main(){
    Queue qu(3);
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.denqueue();
    qu.enqueue(40);

    while(!qu.IsEmpty()){
        cout<<qu.GetFront()<<endl;
        qu.denqueue();
    }
}