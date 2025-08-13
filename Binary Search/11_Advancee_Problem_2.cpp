/*
A new racing track for kids is being built in New York with 'n' starting spots.
The spots are located along a straight line at positions x1, x2... xn(xi <=10^9). For each 'i', xi+1 > xi.
At a time only 'm' children are allowed to enter the race. Since the race track is for kids, they may run into each other while running.
To prevent this, we want to choose the starting spots such that the minimum distance between any two of them is as large as possible.
What is the largest minimum distance?

The first line of input will contain the value of n, the number of starting spots.
The second line of input will contain the n numbers denoting the location of each spot.
The third line will contain the value of m, number of children.

Input
5
1 2 4 8 9
3 

Output
3
*/
#include<iostream>
#include<vector>
using namespace std;
bool Can_Place(vector<int> &v,int mid, int student){
    int student_Req=1;
    int size=v.size();
    int last_Position=v[0];
    for (int i=1;i<size;i++){
        if (v[i] - last_Position>= mid){
            student_Req++;
            last_Position=v[i];
            if (student_Req == student){
                return true;
            }
        }
    }
    return false;
}
int Place(vector<int> &v,int student){
    int start = v[0];
    int size = v.size();
    int end=v[size-1] - v[0];
    int ans=-1;
    while(start<=end){
        int mid = start + (end - start)/2;
        if (Can_Place(v,mid,student)){
            ans=mid;
            start = mid + 1 ;

        }
        else {
            end = mid - 1 ;
        }
    }
    return ans;
}
int main(){
    vector<int> v={1,2,4,8,9};
    int student = 3;
    cout<<Place(v,student);
}