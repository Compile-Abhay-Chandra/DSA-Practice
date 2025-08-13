// find the vlue of p^q
#include<iostream>
using namespace std;
int P(int p, int q){
    if(q==0){return 1;}
    return p*P(p,q-1);
}
int main(){
    int p,q;
    cout<<"Enter base: ";cin>>p;
    cout<<"Enter power: ";cin>>q;
    cout<<P(p,q);
}