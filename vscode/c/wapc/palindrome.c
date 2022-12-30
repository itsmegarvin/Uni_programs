#include<stdio.h>
int main()
{
    int num,temp,rem,rev=0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(temp==rev)
        printf("The number is palindrome.\n");
    else
        printf("The number is not palindrome.\n");
    return 0;
}