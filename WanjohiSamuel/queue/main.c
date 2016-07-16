#include <stdio.h>//for i/o
#include "queue.h"//for function calls	

int main( int argc, char * argv[])
{
	//variables declaration and initialization
	int option;
	char Mem[5];
	int front=-1; 
	int rear=-1;
	char ch;
	char fro=Mem[front];
	int pek=rear+1-front;
	//Title
	printf("\n..IMPLEMENTING A QUEUE OF CHARS IN C..\n");
	printf("----------------------------------------\n\n");
	//Loop forever as long as the condition is maintained
	do
	{
	printf("1.To ADD a character:\n2.To REMOVE a character:\n3.To DISPLAY Queue:\n4.PEEK of Queue:\n5.SIZE of Queue:\n6.EXIT: ");
	printf("\nEnter a choice: ");
	scanf("%d", &option);

	switch(option)
	{
	case 1: add_ch(ch); break;//call add_ch() function to add a character to the queue

	case 2: remove_ch(); break;//call remove_ch() function to remove character

	case 3: display(); break;//call display() function to show characters in the queue

	case 4: fro=peek(); break;//call peek() function to display the character in front of the queue

	case 5: pek=size(); break;//call size() function to give the size of the queue
	
	case 6: return 0;//terminate

	default: return 0; 
	}	
	}
	while (option>0 && option<7);

	return 0;	
}
