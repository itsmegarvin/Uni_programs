#include<stdio.h>
int main()
{
    int a,b,*p,*q,sum;
    printf("Enter the two numbers:\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    sum=*p+*q;
    printf("The sum of numbers are:\n%d",sum);
}