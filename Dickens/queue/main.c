#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
char arr[50];
int rear=-1;
int front=-1;
int main(int argc, char*argv[])
{
int choice;
char ch;
while (1)
{
printf("1.insert element to the queue \n");
printf("2.delete element from queue \n");
printf("3.dispaly all elements in queue\n");
printf("4.exit \n");
printf("please enter yout choice:");
scanf("%\d",&choice); 
switch(choice)
{
case 1: insert(ch);break;
case 2: delete();break;
case 3: display();break;
case 4: exit(1);
default:printf("wrong choice \n");
}}}




