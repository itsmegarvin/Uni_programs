#include<stdio.h>
int main()
{
    int i,j,arr[3][3];// one for row and another for column
    printf("Enter the values for row and columns\n");
    //now taking rows and columns from user
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j<3 ; j++)
        {
            scanf("%d",arr[i][j]);
        }
        
    }
    //now displaying the entered info
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
        
    }
    
    
}