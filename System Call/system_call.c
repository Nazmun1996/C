/* A simple program to demonstrate System call in C language */
/* This program calls the addition.c peogram which is located in the same directory */
/* addition.c has to be compiled as an object, addition.o by command "gcc -addition.c addition.o"  */

#include<stdio.h>
#include<stdlib.h>
int main()
{
printf("Hello World!\n");
system("./addition.o"); //Execute addition.o

return 0;

}
