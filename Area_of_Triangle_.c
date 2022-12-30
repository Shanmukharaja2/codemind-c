#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    double s=(a+b+c)/2;
    double area=(sqrt(s*(s-a)*(s-b)*(s-c)));
    printf("%.2lf",area);
}