#include<stdio.h>
#include<stdlib.h>
#define max 50
int queue[max];
int front=-1;
int rear=-1;
void queue_insert(int);
void queue_delete();
void queue_display();

int main()
{
	int choice,item;
	
	while(1)
	{
		printf("\n 1: insert \n");
		printf("\n 2: delete \n");
		printf("\n 3: display \n");
		printf("\n 4: exit \n");
		
		printf("enter your choice \n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1: printf("enter the element to be inserted \n");
					scanf("%d",&item);
					
					queue_insert(item);
					break;	
					
			case 2: queue_delete();
			break;
			
			case 3: queue_display();
			break;
			
			case 4: exit(0);
			break;
			
			default : printf("incorrect choice\n");		
		}
		
	}
}

void queue_insert(int item)
{
	if(rear==max-1)
	{
		printf("queue is full");
		return;
	}
	if(front==-1 && rear==-1)
	{
		front=rear=0;
	}
	else{
		rear=rear+1;
	}
	queue[rear]=item;
}

void queue_delete()
{
	int e;
	
	if(front==-1 && rear==-1)
	{
		printf("queue empty \n");
		return;
	}
	 e=queue[front];
	 
	 if(front==rear)
	 {
	 	front=rear-1;
	 }
	 else{
	 	front=front+1;
	 }
	 printf("the element deleted is =%d",e);
}

void queue_display()
{
	int i;
	
		if(front==-1 && rear==-1)
	{
		printf("queue empty \n");
		return;
	}
	
	printf("the elements of queue are ");
	
	for(i=front;i<=rear;i++)
	{
		printf("%d",queue[i]);
	}
}

