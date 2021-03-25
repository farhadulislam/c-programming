
#include<stdio.h>

 int main(){

   printf("This is a C program using pointer examples\n");


   int number;
   printf("Enter an integer\n");

   scanf("%d", &number);
   printf("you've entered %d \n", number);

   int *pointer1 = &number;

   printf("The memory address is : %x ", *pointer1);


  return 0;

}
