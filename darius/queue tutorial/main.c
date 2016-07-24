#include <stdio.h>
#include "main.h"


int i;
int a[5];
int *p;
int lenght,n,value;
int select;
int position;

int  main()
{
	
	printf("Enter no of elements : \n");
	  scanf("%d" ,&lenght);

	printf("\nEnter the values :");
           for (i = 0; i < lenght; i++) {
              scanf("%d", &a[i]);
		p=a[i];
   }
	do {
	printf("To display memory address press 1 \n");
	printf("To delete item press 2 \n");
	printf("To insert item use 3 \n");

	scanf("%d" , &select);

   
switch (select)

{
	case 1:
	display();
	break;

	case 2:
	delete();
	break;

	case 3:
	insert();
	break;

	defaulf:
	printf("Option does not exist \n");
}
}
	while (select >0 && select<4);
}
   
