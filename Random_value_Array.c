//Array Containing Random Value From 0 to 100 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define size 5
#define max 100
int main(){
     int arr[size],i,sum=0;
     for(i=0;i<size;i++){
         arr[i]=rand()%max;
         sum+=arr[i];
         printf("ARRAY[%d] has value %d\n",i,arr[i]);
     }
     printf("Sum Of the Elements: %d\n",sum);
     return 0;
}
