#include <stdio.h>
int main(){
int min,max,n,num;
printf("Enter Total no of elements:");
scanf("%d",&n);
min=0;
max=0;
for(int i=1;i<=n;i++){
    printf("Enter Number:");
    scanf("%d",&num);
    if(i<min){
    min=i;
    }
    if(i>max){
    min=i;
    }
}
printf("MAX: %d MIN: %d \n",max,min);
return 0;
}
