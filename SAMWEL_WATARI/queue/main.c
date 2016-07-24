#include <stdio.h>
#include "queue.h"
int main()
{
  int option;
  printf(">>> c program to implement queue operations <<<");
  do
  {
   printf("\n\n 1.Insert an element");
   printf("\n 2.Delete an element");
   printf("\n 3.Display queue");
   printf("\n 4.Front ");
   printf("\n 5.Exit");
   printf("\n Enter your choice: ");
   scanf("%d",&option);
   switch(option)
   {
     case 1: insert_element();
              break;
     case 2: delete_element();
             break;
     case 3: display_queue();
             break;
     case 4:peek();
             break;
     case 5: return 0;
   }
 
  }while(option!=5);
}
