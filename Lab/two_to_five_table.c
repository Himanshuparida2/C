#include <stdio.h>
int main(){
    int n=2;
    do{
       for(int i=1;i<=10;i++){
          printf("%d x %d = %d\n",n,i,n*i);
       }
       n++;
       printf("\n");
    }
    while(n<=5);
    return 0;
}
