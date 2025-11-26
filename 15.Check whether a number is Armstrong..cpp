//15.Write a program to check whether a number is Armstrong.
#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int num,r,sum=0,c=0;
    cout<<"Enter the number: ";
    cin>>num;
    int original=num;
  while(num!=0)
  {
     num=num/10;
      c++;
  }
num=original; //reset
   while(num!=0)
   {
     r=num%10;
     sum=sum+pow(r,c);
     num=num/10;

   }
if(sum==original)
{
    cout<<original<<" is an armstrong number.";
}
else
    {
    cout<<original<<" is not an armstrong number.";
}

}
