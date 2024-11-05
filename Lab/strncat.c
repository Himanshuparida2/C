#include <stdio.h>
#include <string.h>
int main(){
    char pres[30]="Siksha O Anusandhan";
    char first[20],middle[20],last[20];
    printf("%s\n",pres);
    strncpy(first,&pres[0],6);
    pres[6]='\0';
    printf("%s\n",first);
    strncpy(middle,&pres[7],2);
    pres[8]='\0';
    printf("%s\n",middle);
    strncpy(last,&pres[9],11);
    pres[9]="\0";
    printf("%s\n",last);
    return 0;
}