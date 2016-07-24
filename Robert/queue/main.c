/*a program to implement queue using structs
author Muthoni Robert
i39/0742/2013*/
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"
const int MAX = 4;
	//queue called q
          struct que q;
        

int main(){
	 q.front =-1;
         q.rear=-1;
	 int choice;
	 char num;
	while(1){
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
						break;
			case 2:
						del();
						
						
						break;
			case 3:
						display();
						break;
			case 4:
						exit(-1);
						
			default:
						printf("Invalid choice\n");
						
						
			
		}
		
		
	}
}
