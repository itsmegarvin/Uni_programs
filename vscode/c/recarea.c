#include<stdio.h>
void recarea(float a,float b);
int main()
{
    float lth,bth;
    printf("Enter the length and breadth of rect:\n");
    scanf("%f%f",&lth,&bth);
    recarea(lth,bth);
    
    return 0;
}
void recarea(float a,float b)
{
    printf("The area of rect is \n%f ",a*b);
}