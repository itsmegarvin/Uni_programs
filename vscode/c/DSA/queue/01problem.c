#include<stdio.h>
#define MAX 3
int queue_arr[MAX];
int front=0;
int  rear=-1;    /*rear is initialized as -1 to include the space
                 of index 0 during enqueue and front is made 0 
                initially to dequeue first element.therefore valid 
                linear queue.*/
void insert()
{
    int item;
    if(rear==MAX-1)
        printf("queue overflow\n");
    else
        {
            printf("Enter the element:\n");
            scanf("%d",&item);
            rear=rear+1;
            queue_arr[rear]=item;
        }
}
void del()
{
    if(front>rear)
        printf("queue underflow\n");
    else
    {
        printf("the element deleted is \n %d",queue_arr[front]);
        front=front+1;
    }
}
void display()
{
    int i;
    printf("The elements in queue are:\n");
    for ( i = front; i <= MAX-1; i++)
    {
        printf("%d\n",queue_arr[i]);
    }
    
}


int main()
{
    int choice;
    printf("1.Insert the element.\n");
    printf("2.Delete the element.\n");
    printf("3.Display the element.\n");
    printf("4.Quit the process.\n");
    
    while(1)
    {
        printf("Enter your choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                del();
                break;
            case 3:
                display;
                break;
            default:
                exit(0);

        }
    }
}
