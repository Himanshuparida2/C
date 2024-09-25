/*End Controlled File*/
#include <stdio.h>
int main(){
    int sum=0,score,in;
    printf("Score\n");
    in=scanf("%d", &score);
    
    while(in!=EOF){
       printf("%5d\n",score);
       sum+=score;
       in=scanf("%d",&score);
       printf("Value Returned:");
    }
    printf("\n Sum Of Score :%d \n",sum);
    return 0;
}
