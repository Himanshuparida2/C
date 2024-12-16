#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
int main(){
    pid_t childpid,RetW;
    childpid=fork();
    if(childpid==0)
        printf("Inside Child(%ld)\n",(long)getpid());
    else{
        RetW=wait(NULL);
        printf("In parent\n");
        printf("%ld\n",(long)RetW);
    }
    return 0;
}