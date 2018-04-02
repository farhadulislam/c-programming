#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char s[]="Heal the world";

int main(void) {
void showMe();
char c;
int i, j;
for (i=0,j=strlen(s)-1;i<j;i++,j--){
    c=s[i], s[i]=s[j], s[j]=c;
} /* strlen(s)-1 ? */


printf("%s\n",s);
showMe();
return 0;
}
void showMe(){
printf("This is it");}
