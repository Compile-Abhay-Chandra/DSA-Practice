/*An encoded string (s) is given, and the task is to decode it. 
The encoding pattern is that the occurrence of the string is given at the starting of the string and each string is enclosed by square brackets.
Note: The occurrence of a single string is less than 1000.

Input: s = 1[b]
Output: b

Input: s = 3[b2[ca]]
Output: bcacabcacabcaca
*/
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
string Decode_String(string str){
    int length = str.length();
    string result = "";
    for (int i =0; i<length;i++){
        if (str[i] != ']'){
            result+=str[i];
        }
        else{
            string sub_str = "";
            while(result.back()!='['){
                sub_str.push_back(result.back());
                result.pop_back();
            }
            result.pop_back();
            reverse(sub_str.begin(),sub_str.end());

            string num = "";
            while(result.back() >= '0' && result.back() <= '9'){
                num+=result.back();
                result.pop_back();
            }
            reverse(num.begin(),num.end());
            int int_num = stoi(num);

            while(int_num){
                result+=sub_str;
                int_num--;
            }
        }
    }
    return result;
}
int main(){
    string str = "3[b2[ca]]";
    cout<<Decode_String(str);
}