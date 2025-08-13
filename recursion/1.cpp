// factorial by recursion
#include<iostream>
using namespace std;
int factorial(int a){
    if(a==1){
        return 1;
    }
    int ans=a*factorial(a-1);
    return ans;
}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
   cout<<factorial(a);
}