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
    int s=a[0];
    for(i=0;i<n;i++)
    {
        if(s<a[i])
        {
            s=a[i];
        }
    }
    printf("%d",s);
}