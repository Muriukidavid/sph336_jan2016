#include <stdio.h>
#include <string.h>
#include"qu.h"

//function to input into  array
void input(struct test *ptr)
{
printf("Enter: \n");
scanf("%s",ptr->entry);
return;
}

//function to display the full array
void print(struct test *ptr)
{
int i;
printf("\n The array is :");
for(i=0;i<4;i++)
{
    printf("%s",ptr[i].entry);
}
printf("\n");

return;
}
