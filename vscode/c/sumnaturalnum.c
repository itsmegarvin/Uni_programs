//sum of first 20 natural number..

#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=0;i<20-1;i++)
    {
        sum+=i;
    }
    printf("The sum of first 20 natural number is:\n%d",sum);
    return 0;
}