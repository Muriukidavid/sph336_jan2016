#include<stdio.h>
#include <stdlib.h>
#include "queue.h"
extern struct queue q;

void insert (char element){
	if(q.rear==MAX-1){
			printf("\nQueue is Full\n");
			
	}
	else 
		if(q.front==-1){
		q.front=0;
		
		}
	       q.rear=q.rear+1;
	       q.queue[q.rear]=element;
	       printf("%c has been added \n\n",q.queue[q.rear]);
	
}
void del(){
	char element;
	if(q.front==-1 || q.front ==q.rear+1){
		printf("Queue is Empty\n");
		q.front=-1;
		q.rear=-1;
		return;
		
	}
	element =q.queue[q.front];
	q.front++;
	printf("%c has been deleted \n",element);
	
	
}
void display(){
	if(q.front==-1 || q.front==q.rear +1){
		 printf("Queue is empty\n");
		 return;
		 
	}
            int i;
	for(i =q.front;i<=q.rear;i++){
		printf("The array contains : [ %c ]\n",q.queue[i]);
	}
}
	
