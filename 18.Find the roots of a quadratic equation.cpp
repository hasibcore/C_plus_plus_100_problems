//18.Write a program to find the roots of a quadratic equation.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter coefficients a, b and c: ";
    cin>>a>>b>>c;
    double z=b*b-(4*a*c);
    if(a==0)
    {

    cout << "This is not a quadratic equation (a must not be 0)." << endl;
    }
    else
    {
    if(z>0)
     {
         double root1=(-b+sqrt(z))/(2*a);
         double root2=(-b-sqrt(z))/(2*a);
         cout<<"Two distinct roots are "<<root1<<" and "<<root2;
     }
     else if(z<0)
     {
         double real=(-b)/(2*a);
        double im=sqrt(-z)/(2*a);
        cout<<"Complex roots are "<<real<<"+"<<im<<"i"<<" and "<<endl<<real<<"-"<<im<<"i"<<endl;
     }
     else
     {
         double root=-b/(2*a);
         cout<<"Real one root is "<<root;
     }
    }
}
