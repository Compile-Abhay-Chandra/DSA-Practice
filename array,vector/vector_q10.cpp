// given q querrie check if the given number is present in the array or not
//                                      code not working
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a;
    cout<<"enter the size";
    cin>>a;


    vector<int>v(a);
    for(int i=0;i<a;i++){
        cout<<"enter the number: ";
         cin>>v[i];
    }

    int n=1e5+10;                           
    vector<int>freq(n);                   //freq(size,starting number)


    for(int i=0;i<a;i++){         
        freq[v[i]]++;                        // didn' get ask someone
    }
    int q;
    cout<<"enter the query";cin>>q;
    while(q--){                             // q(--) will decrease the value of q till it is zero
        int qe;
        cin>>qe;
        cout<<freq[qe];
    }
}
