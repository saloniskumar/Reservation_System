// Online C compiler to run C program online
#include <stdio.h>
#define MAX 4
int queue[MAX];
int front,rear=-1;
void insert(int value);
void display();
int confirmed[MAX];

     struct pass
   {
       char name[50];
       int train;
       int berth;
     char status;
}
   passenger[MAX+1];

int main() {
 char CH;
   for (int i=0;i<MAX+1;i++){
 printf("Enter details of passenger %d",i+1);
printf("\nEnter name of passenger:");
scanf("%s",passenger[i].name);
     printf("\nEnter train number:");
    scanf("%d",&passenger[i].train);
    printf("\nEnter berth number:");
    scanf("%d",&passenger[i].berth);
     printf("\nEnter status (C or W): ");
    scanf("%*c%c",&passenger[i].status);
   
   
}
    for (int i=0;i<MAX+1;i++)
   {
       if (passenger[i].status=='C')
       {
         
        confirmed[i]=passenger[i].berth;
          printf("\n confirmed: %d",confirmed[i]);
        }
    else
        { int value;
            value=passenger[i].berth;
       insert(value);
       }

   }
   
 printf("\nThe waiting list is:");
 display();
int n;
printf("\nHow many confirmed needs to be deleted?: ");
scanf("%d",&n);
for (int j=0;j<n;j++)
{
int z;
printf("\nWhich berth will be cancelled from confirmed: ");
scanf("%d",&z);
for (int i=0;i<MAX;i++)
{
if (confirmed[i]==z)
{
printf("\nposition of deleted berth: %d",i);
continue;
}

}

int p;
printf("\ninput position of deleted birth: ");
scanf("%d",&p);
for(int i=0;i<MAX;i++)
{
    confirmed[p]=queue[front+j];
    printf("\nconfirmed list: %d",confirmed[i]);
}

}

}

void insert(int value)
{
    if (rear==MAX-1 && front==0)
    printf("Queue is full");
   if (front!=0 && rear==MAX-1)
    {
        rear=0;
  queue[rear]=value;
    }
    else if (front==-1 && rear==-1)
   { front=rear=0;
     queue[rear]=value;
   }

    else
   { rear=rear+1;
    queue[rear]=value;
   }
}

void display()
{
    int i;
    if (front<rear){
        for (i=front;i<=rear;i++)
        {
             printf("\n%d",queue[i]);
        }
    }
    else
    {
    for (i=front;i<MAX;i++)
        printf("\n%d",queue[i]);
    for (i=0;i<=rear;i++)
     printf("\n%d",queue[i]);
    }
}

