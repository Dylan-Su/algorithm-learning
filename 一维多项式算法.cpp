#include <iostream>
using namespace std;

##假设一维多项式为P(x)=3x^6+7x^5-3x^4+2x^3+7x^2-7x+15,x的取值为x=-2.0,-0.5,1.0,2.0,3.7,4.0

double Poly_1D(double a,int n,double x)
{
 double result =0.0;
 result = a[0];
 for(int i = 1;i<n;i++)
  {
   result = result*x+a[i];
  }
 return result;
}


void main()
{
 double a[7] = {3.0,7.0,-3.0,2.0,7.0,-7.0,15.0};
 double x[6] = {-2.0,-0.5,1.0,2.0,3.7,4.0};
 double result;
 
 for(int i = 0;i < 6;i++)
  {
   result = Poly_1D(a,7,x[i]);
   cout<<"当x="<<x[i]<<"时，一维多项式的值为："<<result<<"\n"<<endl;
  }
}