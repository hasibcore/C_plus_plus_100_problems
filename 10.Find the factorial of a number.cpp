//10.Write a program to find the factorial of a number.
#include<iostream>
using namespace std;
int main()
{
   int i,n,fac=1;
   cout<<"Enter the number: ";
   cin>>n;

   for(i=n;i>0;i--)
   {
       fac=fac*i;
   }
   cout<<"Factorial of "<<n<<" is "<<fac;
}
