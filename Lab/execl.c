#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main(void){
    pid_t childpid;
    childpid=fork();
    if(childpid==-1){
        perror("Failded to fork");
        return -1;
    }
    if(childpid==0){
        execl("/bin/ls","ls","-l",NULL);
        perror("Child failed to exec ls");
        return 1;
    }
    if(childpid!=wait(NULL)){
        perror("");
    }
    return 0;
}