#include<stdio.h>
#include <stdlib.h>
#include "queue.h"
        const int MAX = 5;
          struct que q;


int main(){
	 q.front =-1;
         q.rear=-1;
	int choice;
	char num;
	do{
        system("clear");
		printf("Enter your choice :\n ");
		printf("\n1.Add\n");
		printf("2.Remove\n");
		printf("3.Display\n");
		printf("4.Exit\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
						printf("\nEnter a character to be inserted : ");
						scanf(" %c",&num);
						insert(num);
						pause(5);
						break;
			case 2:
						del();

						pause(5);
						break;
			case 3:
						display();
						pause(5);
						break;
			case 4:
						exit(-1);

			default:
						printf("Invalid choice\n");
						pause(5);



		}//end of switch


	}while (choice != 4);
     system("clear");
	//end of while loop
}//end of main function
