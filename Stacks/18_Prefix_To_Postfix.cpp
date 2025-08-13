#include<iostream>
#include<stack>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;

string eval(string &pre){
    stack<string> st;
    reverse(pre.begin(),pre.end());
    for(int i = 0;i<pre.size();i++){
        if(isdigit(pre[i])){
            st.push(to_string(pre[i] - '0'));
        }
        else{
            string val1 = st.top();
            st.pop();
            string val2 = st.top();
            st.pop();
            string newExp = val1 + val2 + pre[i];
            st.push(newExp);
        }
    }
    return st.top();
}

int main(){
    string s = "*+31-15";
    cout<<eval(s);
}
