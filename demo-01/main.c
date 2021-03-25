#include <stdio.h>
#include <stdlib.h>

int add (int x, int y){
    return (x+y);
       }

int main()
{
    int chutuGaveMe = 100;
    int appiGaveMe = 45;

    int mySalary = 210000;
    int myBusinessTurnover = 340000;
    //int myEidee = add(chutuGaveMe, appiGaveMe);

    printf("My eidee from brother and sister %d \n", add(chutuGaveMe, appiGaveMe));

    printf("My income from my salary and business : %d \n ", add(mySalary, myBusinessTurnover));

    printf("Good bye!\n");

    printf("DEMO\n");

    demoWriteReadFile();

    return 0;
}


 void demoWriteReadFile(){

    FILE *fp;

    char fileName [] ="my_file.txt";

    fp = fopen(fileName, "w");

    fprintf(fp,"This a file created by program");
    fclose(fp);



}
