//                                                 print 2nd largest number
#include<iostream>
#include<vector>
using namespace std;
int value(int arra[],int size){                 //finding the largest element
int a=INT16_MIN;
int index=0;
for (int i = 0; i < size; i++)
{
 if (arra[i]>a)
{
    a=arra[i];
    index=i;                                 // position of largest element
} 
}
return index;                               //returning the position of the largest element
}
int main(){
    int arr[]={1,2,3,4,500,6,7,8,100,10};
   int b= value(arr,10);
   arr[b]=0;                               //updating the largest element to 0
    int c=value(arr,10);                    //again finding the largest element
    cout<<arr[c];
}
