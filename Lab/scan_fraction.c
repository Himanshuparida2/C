#include <stdio.h>
void scan_function(int *num,int *denomp){
char slash;
int status;
int error;
char discard;
    do{
       error=0;
       printf("Enter a common fraction as two integers separated ");
       printf("by a slash> ");
       status = scanf("%d %c %d",num,&slash,denomp);
       printf("Status = %d",status);
       if(status < 3){
           error=1;
           printf("Invalid please read direction\n");
           printf("by a slash (/)\n");
       }
       else if(slash !='/'){
           printf("invalid-separate numerator and denominator");
           printf("by a slash(/)\n");
       }
       else if(*denomp<=0){
           error=1;
           printf("invalid-denominator must be positive\n");
       }
       do{
            scanf("%c",&discard);
       }
       while(discard!='\n');
    }while(error);
}
int main(){

return 0;
}
