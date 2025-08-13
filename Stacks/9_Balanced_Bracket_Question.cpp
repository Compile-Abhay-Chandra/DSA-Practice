//
#include<iostream>
#include<string>
#include<stack>
#include<climits> // INT_MAX , INT_MIN
using namespace std;

bool Is_Valid(string &str){
    stack<char> s;
    for(int i=0; i<str.size(); i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            s.push(str[i]);
        }
        else{
            if(str[i] == ')' && !s.empty() && s.top() == '('){
                s.pop();
            }
            else if(str[i] == '}' && !s.empty() && s.top() == '{'){
                s.pop();
            }
            else if(str[i] == ']' && !s.empty() && s.top() == '['){
                s.pop();
            }
            else{
                return false;
            }
        }
    }
    return s.empty();
}

int main(){

    string s = "({[]}){[]}{[()]}";
    cout<<(Is_Valid(s)? "Valid": "Invalid");

}