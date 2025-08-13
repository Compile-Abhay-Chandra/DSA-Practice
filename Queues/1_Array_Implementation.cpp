#include<iostream>
#include<vector>
using namespace std;

class Queue{
    int front;
    int back;
    vector<int> v;
public:
    Queue(){
        front = -1;
        back = -1;
    }

    void enqueue(int val){
        v.push_back(val);
        back++;
        if(back == 0) front = 0;
    }

    void denqueue(){
        if(front == back){
            front = -1;
            back = -1;
            v.clear();
        }
        else front++;
    }

    int GetFront(){
        if(front == -1) return -1;
        return v[front];
    }

    bool IsEmpty(){
        return front == -1;
    } 
};

int main(){
    Queue qu;
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