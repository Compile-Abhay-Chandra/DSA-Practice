// add complex number
#include<iostream>
using namespace std;
class Complex_Number{
    public:
    int real;
    int imaginary;

    Complex_Number(int x , int y){
        real = x;
        imaginary = y;
    }
    Complex_Number operator+ (Complex_Number &c2){
        Complex_Number ans(0,0);
        ans.real = real + c2.real;
        ans.imaginary = imaginary + c2.imaginary;
        return ans;
    }
};
int main(){

    Complex_Number c1(3,4);
    Complex_Number c2(5,6);
    Complex_Number c3 = c1 + c2;
    cout<<c3.real<<" + "<<c3.imaginary<<"i"<<endl;

}