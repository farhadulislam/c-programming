#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Simple program in C language!\n");

    swap(3, 4);
    int total = 0;
    for (int i = 0; i<100; i++){
        printf("%d\n", i);
        total +=i;
    }
    printf(" %d", total);
    convert(800);
    return 0;
}


void swap (int x, int y){

    x = x + y;
    y = x - y;
    x = x - y;

    printf("x : %d\n", x);
    printf("y : %d\n", y);

}

void convert ( double amount){
    double result = amount * 116;
    printf("%f", result);

}
