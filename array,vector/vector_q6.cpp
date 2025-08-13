//                                                 print largest number
#include<iostream>
#include<vector>
using namespace std;
int value(int arra[],int size){
int a=INT8_MIN;
for (int i = 0; i < size; i++)
{
 if (arra[i]>a)
{
    a=arra[i];
} 
}
return a;
}
int main(){
    int arr[]={1,2,3,4,999,6,7,8,9,10};
   int b= value(arr,10);
    cout<<b;
}
