//sum of naturral number with alternating sign using recursion
#include<iostream>
using namespace std;
int F(int a){
    if(a==0){
        return 0;
    }
    return F(a-1)+((a%2==0)? -a: a);
}
int main(){
    int a=10;
    cout<<F(a);
}