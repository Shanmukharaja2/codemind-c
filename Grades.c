#include<stdio.h>
int main()
{
    int physics,chemistry,biology,mathematics,computer,total;
    scanf("%d%d%d%d%d",&physics,&chemistry,&biology,&mathematics,&computer);
    total=(physics+chemistry+biology+mathematics+computer)/5;
    if(total>=90)
    {
        printf("Grade A");
    }
    else if(total>=80 && total<90)
    {
        printf("Grade B");
    }
    else if(total>=70 && total<80)
    {
        printf("Grade C");
    }
    else if(total>=60 && total<70)
    {
        printf("Grade D");
    }
    else if(total>=40 && total<60)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}
