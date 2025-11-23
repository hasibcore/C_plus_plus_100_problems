//9.Write a program to generate the Fibonacci series.
#include<iostream>
using namespace std;
int main ()
{
    int num1=0,num2=1,num3,n;
    cout<<"Enter the n'th terms: ";
    cin>>n;
    cout<<num1<<" "<<num2<<" ";
    for(int i=1;i<n-1;i++)
    {
        num3=num1+num2;
        cout<<num3<<" ";
       num1=num2;
        num2=num3;


    }
    return 0;
}
