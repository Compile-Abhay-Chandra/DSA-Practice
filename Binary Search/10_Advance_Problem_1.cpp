// You have 'n'(n <= 10^5) boxes of chocolate. Each box contains a[i] (a[i] <= 10000) chocolates. You need to distribute these boxes among 'm' students such that the maximum number of chocolates allocated to a student is minimum.
// a. One box will be allocated to exactly one student.
// b. All the boxes should be allocated.
// c. Each student has to be allocated at least one box.
// d. Allotment should be in contiguous order, for instance, a student cannot be allocated box 1 and box 3, skipping box 2.
// Calculate and return that minimum possible number.
// Assume that it is always possible to distribute the chocolates.
// The first line of input will contain the value of n, the number of boxes.
// 114100
// 100000
// The second line of input will contain the n numbers denoting the number of chocolates in each box.
// The third line will contain the m, number of students.

// Input 
// 4 12 34 67 90
// 2 
// output
// 113
#include<iostream>
#include<vector>
using namespace std;
bool Can_Distribute(vector<int> &v , int mid , int student){
    int size = v.size();
    int Currenr_sum=0;
    int student_required=1;
    for (int i = 0 ; i < size ; i++){    // if a single element is greater than mid it is not possible to distribute choclates less than mid;
        if (v[i]>mid){
            return false;
        }
        if (Currenr_sum + v[i] > mid){   // if the sum of choclates is more than mid 
            student_required++;
            Currenr_sum=v[i];
            if(student_required>student){ // if you require more student then present (you can't)
                return false;
            }
        }
        else{
            Currenr_sum+=v[i];
        }
    }
    return true;
}
int Choclate_Distribution(vector<int> &v,int student){
    int size=v.size();
    int min = v[0];
    int max = 0;
    for (int i=0;i<size;i++){
        max+=v[i];
    }
    int ans=-1;
    while(min<=max){
        int mid = min + (max-min)/2;
        if(Can_Distribute(v,mid,student)){  // if distributin is possible
            ans=mid;
            max = mid -1;
        }
        else{
            min = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int> v={12,34,67,90};
    int student=2;
    cout<<Choclate_Distribution(v,student);
    return 0;
}