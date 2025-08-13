//fibunachi number
#include <iostream>
#include <vector>
using namespace std;
// int main(){
//     int a=10;
//     int n;
//     cin>>n;
//     vector<int>F(a);                    // Using normal methord
//     F[0]=0;
//     F[1]=1;
//     for(int i=2;i<F.size();i++){
//         F[i]=F[i-1]+F[i-2];
//     }
//     cout<<F[n];
// }
int F(int a){
    if(a==0 || a==1){
        return a;
    }                                   // Using  recursion
    return F(a-1)+F(a-2);
}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<F(a);
}