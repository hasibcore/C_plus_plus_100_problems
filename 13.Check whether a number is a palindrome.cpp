//13.Write a program to check whether a number is a palindrome.
#include<iostream>
using namespace std;
int main()
{
    int n,s=0,i,z;
    cout<<"Enter the Number: ";
    cin>>n;
    int t=n;
 while(n!=0)
 {
     z=n%10;
     s=z+s*10;
     n=n/10;
 }
cout<<s<<endl;
   if(s==t)
   {
       cout<<t<<" is pelindrome.";
   }
    else
     {
       cout<<t<<" is not pelindrome.";
   }



}
