#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){
    int err;
    err=execle("/usr/bin/wc","wc","execldemo.txt",NULL,NULL);
    if(err==-1){
        perror("Execle Failed\n");
    }
    return 0;
}