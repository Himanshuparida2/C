#include <stdio.h>
#include <string.h>
int main(){
   char newst[20];
   char *st="A Very Long Test String";
   strncpy(newst,st,6);
   newst[6]='\0';
   printf("%s \n",newst);
return 0;
}
