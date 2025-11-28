//20.Write a program to count the number of digits in a number.
#include<iostream>
using namespace std;
int main()
{
    int num,r,c=0;
  cout<<"Enter the number : ";
    cin>>num;
    while(num!=0)
    {
        num=num/10;
        c++;
    }

    cout<<"The count of digits of a number: "<<c;
}


