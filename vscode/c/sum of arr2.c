//sum of array making them dynamic.....

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    //we cannot declare arr[n] here before taking from user
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("\nThe sum of array is : \n%d",sum);
    return 0;
}