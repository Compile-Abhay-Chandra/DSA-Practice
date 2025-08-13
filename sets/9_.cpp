/*Given the number of questions as n, and marks for the correct answer as pand q marks for the incorrect answer.
One can either attempt to solve the question in an examination and get either pmarks
if the answer is right, or q marks if the answer is wrong, or leave the question unattended and get 0 marks.
The task is to find the count of all the different possible marks that one can score in the examination.

Input 1: n = 2, p = 1, q = -1
Output 1: 5
Explanation: The different possible marks are: -2,-1,0,1,2
*/
#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main(){
    unordered_set<int> Set;
    int n,p,q;
    n = 2;
    p = 1;
    q = -1;
    for(int i = 0; i <= n; i++) {
        for(int j = 0; j <= n; j++) {
            int correct = i;
            int incorrect = j;
            int unattempted = n - i - j;
            if (unattempted >= 0) { // Ensure unattempted is non-negative
                int score = correct * p + incorrect * q;
                Set.insert(score);
            }
        }
    }
    for(auto Score: Set){
        cout<<Score<<" ";
    }
    cout<<endl<<Set.size();
}