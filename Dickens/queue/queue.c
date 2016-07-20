#include <stdio.h>
int max=50;

typedef struct queue
{
	char arr[50];
	int front;
	int rear;
};

struct queue q={.front=-1, .rear=-1 };

void insert(char ch)
{
if (q.rear == max - 1)
printf("Queue Overflow \n");     
else
{
if (q.front == - 1)
/*If queue is initially empty */
q.front = 0;
printf("Inset the element in queue : ");
scanf("%s", &ch); 
q.rear = q.rear + 1;
q.arr[q.rear] = ch;
}
} /*End of insert()*/
void delete()
{
if (q.front == - 1 || q.front > q.rear)
{
printf("Queue Underflow \n");
return ;
}
else
{
printf("Element deleted from queue is : %c\n", q.arr[q.front]);
q.front = q.front + 1;
     }
} /*End of delete() */
void  display()
{
int i;
if (q.front == - 1)
printf("Queue is empty \n");
else
{
printf("Queue is : \n");
for (i = q.front; i <= q.rear; i++)
printf("%c ", q.arr[i]);
printf("\n");
}
 } /*End of display() */
