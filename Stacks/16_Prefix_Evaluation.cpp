// same as postfix just reverse the loop
#include<iostream>
#include<stack>
#include<vector>
#include<string>
#include<math.h>
using namespace std;

int calcuate(int num1, int num2, char oper){

    if(oper == '^'){
        return pow(num1, num2);
    }
    else if(oper == '*'){
        return num2*num1;
    }
    else if(oper == '+'){
        return num2 + num1;
    }
    else if(oper == '-'){
        return num2 - num1;
    }
    else{
        return num2 / num1;
    }

}

int evaluate(string &str){

    stack<int> st;
    for(int i=str.size()-1; i>=0; i--){
        char ch = str[i];
        if(isdigit(ch)){
            st.push(ch - '0');
        }else{
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            st.push(calcuate(val1,val2,ch));
        }
    }
    return st.top();

}

int main(){
    string str = "-9+*132"; 
    cout<<evaluate(str);
}