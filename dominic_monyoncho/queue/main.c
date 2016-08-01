#include <stdio.h>//input/output
#include "main.h"//function calls

int k; //counter
int a[9];//array that  takes nine integers
int *p;
int length,n,value;//overwrites number of input chcaracters from the keyboard, value is number to be inserted into the queue.
int select;//
int position;//In either insertion or deletion choose index in queue

int main()
{
	printf("Enter no of characters: \n");//Prints value from the keyboard
    scanf("%d" ,&length);//Picks value from the keyboard
    printf("\nEnter the values :");
    	for (k = 0; k < length; k++) 
    		{
              scanf("%d", &a[k]);
		     p=a[k];
		 	}

		 do {
				printf("case1, to display memory address press 1 \n");
				printf("case2, to delete item press 2 \n");
				printf("case3, to insert item use 3 \n");
				scanf("%d" , &select);

				switch (select)
			{
				case 1: display(); break;
				case 2: delete(); break;
				case 3: insert(); break;

				default: printf("Option does not exist \n");
			}
}
	while (select >0 && select<8);
}
