#include <stdio.h>//for i/o
#include "queue.h"//for functions call
const int MAXI=26;

//queue structure
typedef struct queue
{ 
	char Mem[26];//the array
	int front;//variable initialization
	int rear;
};
struct queue q1={.front=-1, .rear=-1};//struct instance initialization
//function for inserting characters in the queue in rear end
void add_ch(char ch)
{	
	printf("\nAdd a character to Queue: ");//prompts
	scanf("%s", &ch);
	//To add a character
	//if queue is full
	if(q1.front==0 && q1.rear==MAXI-1)
	{
    printf("\n\tQueue is full.....\n");
	}
	//queue is empty
	else if(q1.front==-1 && q1.rear==-1)
    {
	q1.rear=q1.front=0;
	q1.Mem[q1.rear]=ch;
	}
	//Add to queue if not full
	else if(q1.rear==MAXI-1 && q1.front!=0)
	{
	q1.rear=0;
	q1.Mem[q1.rear]=ch;
	}
	//Add to queue and increment the rear end
	else
	{
    q1.rear++;
    q1.Mem[q1.rear]=ch;
	}
	printf("\n");
}
//To remove character from front end
void remove_ch()
{
	char ch=q1.Mem[q1.front];//declaration and initialization

	if(q1.front==q1.rear+1){//condition if queue is empty 
	printf("\tQueue is empty.....\n");
    q1.front=-1;
	q1.rear=-1;
	}
	//if queue contains character(s)
    else { 
    q1.front++;
    printf("\nThe deleted char is: %c\n", ch);}
	
	printf("\n");
}
//To display characters in the queue
void display()
{	
	char ch;//variables declaration
	int i; 

    if(q1.front==-1)//Nothing in the queue
    printf("\nNothing to display. \n");

    else
    {
    printf("\nCharacters are: \n");
	//for loop to display all characters in the queue
	for(i=q1.front; i<=q1.rear; i++)
	{
	ch=q1.Mem[i];
    printf("%c ", ch);
    }
	printf("\n\n");
	}
	printf("CHAR - ADDRESS");
	printf("\n-------------");
	for(i=q1.front; i<=q1.rear; i++)
	{
	ch=q1.Mem[i];
    printf("\n%c  - %x\n ", ch, &ch);
    }
	printf("\n");
}
//The size of queue
int size()
{
	if(q1.rear>-1)
	{
	int count=q1.rear+1-q1.front;//the rear index minus the front index
	printf("\nQueue Size = %d\n\n", count);
	return count;
	}
	else
	printf("\nQueue is empty\n\n");
	
}
//To show the front character
char peek()
{
	if(q1.front>0)
	{
	int fro=q1.front;//variable declaration and initialization
	char ch;
	ch=q1.Mem[fro];
	printf("\nChar in front: %c\n\n", ch);
	return ch;
	}
	else
	printf("\nQueue is empty..\n\n");
}
