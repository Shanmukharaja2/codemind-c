#include<stdio.h>
int main()
{
    int y,w,d;
    scanf("%d",&d);
    y= d/365;
    w= (d-(y*365))/7;
    printf("%d
%d",y,w);
}
