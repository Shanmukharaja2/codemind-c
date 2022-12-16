#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+n;i>=1;i--)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
}