#include<stdio.h>
#include <stdlib.h>
#include "tamaro.h"
extern struct que q;

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

		q.front=-1;
		q.rear=-1;
		printf("Queue is Empty\n");
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
            int x;
	    char element;
	    element =q.queue[q.front];
	for(x =q.front;x<=q.rear;x++){
        element =q.queue[q.front];
        q.front++;
		printf("The array contains : [ %c ]\n",element);
	}

}

