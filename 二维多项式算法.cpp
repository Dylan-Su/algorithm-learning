#include <iostream>
using namespace std;

double Poly_2D(double a[][],int m,int n,double x,double y)
{
 double result,temp,tt;
 result = 0.0;
 tt = 1.0;
 for(int i = 0;i < m;i++)
  {
   temp = a[i][n-1]*tt;
   for(int j = n-2;j>=0;j--)
   {
    temp = temp*y+a[i][j]*tt;;
   }
   result = temp+result;
   tt=tt*x;
  }
  return result;
}


public static void main(String[] args) 
{  
        double A[][]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};  
        int m=4;  
        int n=5;  
        double x=0.5;  
        double y=-2.0;  
        double result=Poly_2D(A,m,n,x,y);  
        System.out.println(result);  
} 