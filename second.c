
#include<stdio.h>

 int main(){

   int calc();

   //int addNumber(int a , int b);
   printf("This is a C program\n");

   int number1;
   printf("Enter a number to add");

   scanf("%d", &number1);
   printf("you've entered %d", number1);

   int number2;
   printf("Enter another number to add");

   scanf("%d", &number2);
   printf("you've entered %d", number2);

   int answer = addNumber(number1, number2);

   printf("Answer is %d", answer);




  return 0;

}
int addNumber(int a , int b){

       return (a+b);
   }
