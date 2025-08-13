//
#include<iostream>
#include<math.h>
#include<stack>
#include<climits> // INT_MAX , INT_MIN
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

int precidence(char ch){
    if (ch == '^')  return 3;
    else if (ch == '*' || ch == '/')    return 2;
    else if (ch == '+' || ch == '-')    return 1;
    else    return -1;
}

int evaluate(string &str){
    stack<int> num;
    stack<char> ops;
    for(int i = 0; i<str.size(); i++){

        if(str[i] == ' ') continue;

        if(isdigit(str[i])){
            num.push(str[i] - '0');
        }
        else if(str[i] == '('){
            ops.push(str[i]);
        }
        else if(str[i] == ')'){
            while(ops.top() != '('){
                char op = ops.top();
                ops.pop();
                int val1 = num.top();
                num.pop();
                int val2 = num.top();
                num.pop();
                num.push(calcuate(val1,val2,op));
            }
            if(!ops.empty())    ops.pop();
        }
        else{
            while(!ops.empty() && precidence(ops.top()) > precidence(str[i])){
                char op = ops.top();
                ops.pop();
                int val1 = num.top();
                num.pop();
                int val2 = num.top();
                num.pop();
                num.push(calcuate(val1,val2,op));
            }
            ops.push(str[i]);
        }
    }
    while(!ops.empty()){
        char op = ops.top();
        ops.pop();
        int val1 = num.top();
        num.pop();
        int val2 = num.top();
        num.pop();
        num.push(calcuate(val1,val2,op));
    }
    return num.top();
}

int main(){
    string str = "1+(2*(3-1))+2"; 
    cout<<evaluate(str);
}