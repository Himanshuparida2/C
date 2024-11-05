#include <stdio.h>
int main(){
    char string[30];
    printf("Enter a String: ");
    fgets(string,20,stdin);
    printf("%s\n",string);
    return 0;
}