#include<stdio.h>

 int main(){

   printf("This is a C program\n");

   int number;
   printf("Enter an integer");

   scanf("%d", &number);
   printf("you've entered %d", number);


   for (int i = 0; i<number; i++){
     printf(i);
   }



}
