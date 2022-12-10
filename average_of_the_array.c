#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    float s=0,avg;
    for(i=0;i<n;i++)
    {
            s=s+a[i];
    }
    avg=s/n;
    printf("%.2f",avg);
}