//sum of array initializing them

#include<stdio.h>
int main()
{
    int i,arr[]={1,2,3,4,5},sum=0;
    for(i=0;i<=19;i++)
    {
        sum=sum+arr[i];    
    }
    printf("%d",sum);
}