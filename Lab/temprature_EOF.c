#include <stdio.h>
int main(){
    int cel,in,count=0;
    while(in!=EOF){
         in=scanf("%d",&cel);
         if(cel>100){
         count++;
            printf("Celcius : %doC\n",cel);
         }
    }
    printf("Total %d Temperature More than 100 \n",count);
    return 0;
}
