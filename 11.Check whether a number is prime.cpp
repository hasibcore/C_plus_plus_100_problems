//11.Write a program to check whether a number is prime.
#include<iostream>
using namespace std;
int main()
{
    int n,i,c=1;
    cout<<"Enter the Number: ";
    cin>>n;
    if(n==2)
    {
        cout<<n<<" is a prime Number";
    }
    else if(n==0 || n==1)
    {
        cout<<n<<" is not a prime Number";
    }
    else
    {
        for(i=1;i<n/2;i++)
        {
           if(n%(n-i)==0)
           {
               c=0;
               break;
           }

        }
        if(c==0)
        cout<<n<<" is not a prime Number";
        else
        {
            cout<<n<<" is a prime Number";
        }

    }
   return 0;
}






