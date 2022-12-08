#include<stdio.h>
int main()
{
    int b1,b2,h;
    float t; 
    scanf("%d%d%d",&b1,&b2,&h);
    t=((b1+b2)/2.0*h);
    printf("%.4f",t);
}