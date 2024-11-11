#include <stdio.h>
#include <string.h>
int main(){
    char result[10], s1[15]="Jan. 30, 1996";
    char *s2;
    strncpy(result,s1,9);
    result[9]='\0';
    s1[9]='\0';
    printf("Substring::%s \n",result);
    strncpy(s2,s1,9);
    result[9]='\0';
    printf("%s\n",result);
return 0;
}
