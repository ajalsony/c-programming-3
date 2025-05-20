#include<stdio.h>
#include<stdlib.h>
int main(){
 int value,size,choice;
  int rear=-1;
  int front=-1;
   printf("limit of the queue");
    scanf("%d",&value);
     int crq[value];
      while(1){
               printf("select option");
                printf("1.Enqueue\t2.dequeue\t3.display\t4.Exit\t");
                scanf("%d",&choice);
    switch(choice){
    case 1:
    if(front==-1&&rear==-1){
    front=rear=0;
    printf("enter the elements to enqueue");
    scanf("%d",&value);
    crq[rear]=value;
    }
else if((rear+1)%size==front){
printf("overflow");}
else{
rear=(rear+1)%size;
printf("enter the elements to enqueue");
 scanf("%d",&value);
 crq[rear]=value;
 }break;
 case 2:
 	if(front==rear && front!=0){
 		rear=front=-1;
 		printf("Quee is full");
 	}
 	else{
 		printf("Dequed %d",crq[front]);
 		front=(front+1)%size;
 		
 	}
 	break;
 case 3:
         printf("Queue elements are");
         int i=front;
    while(1){
         printf("%d",crq[i]);
      if(i==rear)
       break;
         i=(i+1)%size;
         }
         printf("\n");
       break;
  case 4:
          exit(0);
       default:
          printf("invalid");
         break;
          }
          }
          return 0;
          }
        
               

