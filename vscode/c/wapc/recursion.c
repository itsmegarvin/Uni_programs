#include<stdio.h>
int fact(int a)
{
    if(a>0)
        return a*fact(a-1);
    else  
        return 1; 
}
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("The factorial of the number is %d",fact(n));
    return 0; 
}