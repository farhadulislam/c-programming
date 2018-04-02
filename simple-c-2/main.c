#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char s[]="Heal the world";

int main(void) {

char c;
int i, j;
for (i=0,j=strlen(s)-1;i<j;i++,j--) /* strlen(s)-1 ? */
c=s[i], s[i]=s[j], s[j]=c;

printf("%s\n",s);
return 0;
}
