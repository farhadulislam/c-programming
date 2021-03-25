
#include<stdio.h>
#define VALUE 23;

 int main(){

   int calc();

   //int addNumber(int a , int b);
   printf("This is a C mishkat\n");

   int number1;
   printf("Enter a number to add \n");

   scanf("%d \n", &number1);
   printf("you've entered %d \n", number1);

   int number2;
   printf("Enter another number to add \n");

   scanf("%d \n", &number2);
   printf("you've entered %d \n", number2);

   int answer = addNumber(number1, number2);

   printf("Answer is %d \n", answer);




  return 0;

}

 int addNumber(int a , int b){

       return (a+b);
   }

double doAverage (double [] cost){
  return 0.00;
}
