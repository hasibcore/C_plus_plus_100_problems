//7.Write a program to check whether a year is a leap year.
#include<iostream>
using namespace std;
int main()
{
    int y;
    cout<<"Enter the year"<<endl;
    cin>>y;
    if(y%400==0)
    {
        cout<<y<<" is a leap year";
    }
    else
    {
        if(y%4==0 && y%100!=0)
        {
            cout<<y<<" is a leap year";
        }
        else
        {
            cout<<y<<" is not leap year";
        }
    }
    return 0;

}
