#include <stdio.h>
int main(){
   int arr[5],sum=0;
   for(int i=0;i<5;i++){
       printf("Enter Element:\n");
       scanf("%d",&arr[i]);
       sum+=arr[i];
   }
   printf("Sum of all The Elements are: %d\n",sum);
   return 0;
}
