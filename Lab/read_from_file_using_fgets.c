#include <stdio.h>
int main(){
    FILE *file;
    char read[100];
    int line=1;
    file=fopen("input_file.txt","r");
    while (fgets(read,sizeof(read),file)!=NULL){
        printf("%d>> %s",line,read);
        line++;
    }
    fclose(file);
    return 0;
}