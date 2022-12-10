#include<stdio.h>
#include<math.h>
int main()
{
    double c,p,r,t; 
    scanf("%lf%lf%lf",&p,&r,&t);
        c=p*pow((1+(r/100.0)),t); 
     printf("%.2lf",c);
}   