/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
 int n,k;
 double a,lnx,x;
 lnx=0;
 printf("Enter the number of row members->\n");
 scanf("%d",&k);       
 printf("Enter the value of x->\n");
 scanf("%lf",&x);
 for(n=0;n=k;n++)
 {
    a=(pow(x-1,2*n+1))/((2*n+1)*(pow(x+1,2*n+1)));
    lnx=2*a*n;
    printf("a=%lf\n",a);
    printf("lnx=%lf\n",lnx); 
    break;
 }
return 0;
    
}

