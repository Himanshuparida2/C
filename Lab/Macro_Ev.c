#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main(void){
    int status;
    pid_t childpid,pid;
    pid=fork();
    if(pid==0){
        printf("Child Part Executed!!! with (%ld)\n",(long)pid);
        sleep(50);
        exit(0);
    }
    else{
        childpid=wait(&status);
        if(childpid==-1){
            perror("Failed to wait for child");
        }
        else if(WIFEXITED(status))
            printf("Child %ld is terminated with return status %d\n",(long)childpid,WEXITSTATUS(status));
        else if(WIFSIGNALED(status))
            printf("Child %ld terminated due to uncaught signal %d\n",(long)childpid,WTERMSIG(status));
        else if(WIFSTOPPED(status))
            printf("Child %ld terminated",(long)childpid);
    }
    return 0;
}