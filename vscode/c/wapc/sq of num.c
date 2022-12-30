//square of number using function

#include<stdio.h>
int sqofnum(int a);
int main()
{
    int num,b;
    printf("Enter the number:\n");
    scanf("%d",&num);
    b=sqofnum(num);
    printf("The square of %d is %d \n",num,b);
    return 0;
}
int sqofnum(int a)
{
    return a*a;
}