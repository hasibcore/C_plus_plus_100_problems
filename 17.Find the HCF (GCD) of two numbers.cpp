//17.Write a program to find the HCF (GCD) of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,r;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
int num1=a,num2=b;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    cout<<"The LCM of "<<num1<<","<<num2<<" is "<<a;
}
