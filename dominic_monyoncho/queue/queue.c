#include <stdio.h>
#include "main.h"

int k; //counter
int a[9];//array that  takes nine integersth
int length;//overwrites number of input chcaracters from the keyboard
int n;//
int value;//number to be inserted into the queue
int select;//
int position;//In either insertion or deletion choose index in queue

void display()//display function
  {for (int k =0;k<length;k++)

  {printf("\n array[%d] = %d",k , a[k]);
	 printf("\n array[%d]  Has the  address of %x",k, &a[k]);
	 printf("\n");}
    } 

 void delete(){
      printf("Enter the location where you wish to delete value\n");
      scanf("%d", &position); 
      if ( position >= length+1 )    
      printf("Deletion not possible.\n");
      else
      {for ( k = position - 1 ; k < length - 1 ; k++ ) 
        a[k] = a[k+1]; }
      }

void insert (){	
      printf("\nEnter the value to be inserted :");
      scanf("%d", &value);
      printf("\nEnter the position");
      scanf("%d", &position);
   
   //Create space at the specified position
   for (k = length; k >= position; k--) {
      a[k] = a[k - 1];
   }
 
   length++;
   a[position - 1] = value;
 
   //Print out the result of insertion
   for (k = 0; k < length; k++)
      printf("\n %d", a[k]);
}
