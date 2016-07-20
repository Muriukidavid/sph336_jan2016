#include <stdio.h>
#include "main.h"

int i;
int a[5];
int *p;
int lenght,n,value;
int select;
int position;

 void display()
    {
	for (int i =0;i<lenght;i++)
{
        printf("\n array[%d] = %d",i , a[i]);
	printf("\n array[%d]  Has the  address of %x",i, &a[i]);
	
	printf("\n");
}
    } 

 void delete()
{
    
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &position);
    
    if ( position >= lenght+1 )    
    printf("Deletion not possible.\n");
    
    else
    {    
        for ( i = position - 1 ; i < lenght - 1 ; i++ ) 
        a[i] = a[i+1]; 
          
    } 
}
void insert ()
{	
 printf("\nEnter the element to be inserted :");
   scanf("%d", &value);
 
   printf("\nEnter the position");
   scanf("%d", &position);
   
   //Create space at the specified position
   for (i = lenght; i >= position; i--) {
      a[i] = a[i - 1];
   }
 
   lenght++;
   a[position - 1] = value;
 
   //Print out the result of insertion
   for (i = 0; i < lenght; i++)
      printf("\n %d", a[i]);


}
