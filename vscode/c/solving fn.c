/* 
        y=2*x*x*x+3*x*x+4*x+5
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int n,y,i;  
    //we cant declare arr[n] just before taking input from user
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
     //we can find y for different x after using array
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        y=2*pow(arr[i],3)+3*pow(arr[i],2)+4*arr[i]+5;
        printf("The value of y for x=%d is %d\n",arr[i],y);
    }
    return 0;
}