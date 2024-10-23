//From a Given Array Show The Standard Deviation of the Elements and mean of the elements and also with the proper table print the value of item and difference
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
   double arr[8]={16,12,6,8,2.5,12,14,-54.3},mean,MAX_ITEM=0,st_dev,sum_sqr=0,sum=0;
   for(int i=0;i<8;i++){
       sum_sqr+=pow(arr[i],2);
       if(MAX_ITEM<arr[i]){
             MAX_ITEM=arr[i];
       }
       sum+=arr[i];
   }
   mean=sum/8;
   st_dev=sqrt(sum_sqr/MAX_ITEM - mean*mean);
   printf("The Standard Deviation is %.2f.\n",st_dev);
   printf("The Mean Value is %.2f \n",mean);
   printf("INDEX\tITEM\tDifference\n");
   for(int j=0;j<8;j++){
      printf("%d\t%.2f\t%.2f\n",j,arr[j],arr[j]-mean);
   }
   return 0;
}
