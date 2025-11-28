//19.Write a program to find the sum of digits of a number.
#include<iostream>
using namespace std;
int main()
{
    int num,r,sum=0;
    cout<<"Enter the number : ";
    cin>>num;
    while(num!=0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
}

    cout<<"The sum of digits of a number: "<<sum;
}
