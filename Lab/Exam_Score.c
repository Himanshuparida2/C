#include <stdio.h>
#define SENTINEL -99
int main(){
    int sum=0,score;
    printf("Enter Your First Score (or %d to quit):",SENTINEL);
    scanf("%d",&score);
    while(score!=SENTINEL){
      sum+=score;
      printf("Enter Next Score (%d to quit):",SENTINEL);
      scanf("%d",&score);
    }
    printf("\nTotal Score : %d\n",sum);
    return 0;
}
