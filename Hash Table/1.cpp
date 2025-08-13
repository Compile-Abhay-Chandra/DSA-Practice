#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;

class Hashing{
    int bucket;
    vector<list<int>> hashtable;

public:

    Hashing(int size){
        bucket = size;
        hashtable.resize(bucket);
    }

    int HashValue(int key){
        return key%bucket;              // division method
    }

    void add(int key){
        hashtable[HashValue(key)].push_back(key);
    }

    list<int>::iterator Search(int key){
        int idx = HashValue(key);
        return find(hashtable[idx].begin(),hashtable[idx].end(),key);
    }

    void Delete(int key){
        int idx = HashValue(key);
        if(Search(key) != hashtable[idx].end()){
            hashtable[idx].erase(Search(key));
            cout<<key<<" Deleted Successfully."<<endl;
        }
        else{
            cout<<"Key not found."<<endl;
        }
    }

};

int main(){

    Hashing h(4);
    h.add(2);
    h.add(3);
    h.add(4);
    h.add(5);
    h.Delete(5);

}