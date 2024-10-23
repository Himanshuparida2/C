#include <stdio.h>
#include <stdlib.h>
void compare(int x[],int y[]){
int k=sizeof(x)/4, res[k],in=0;
printf("Common Elements are :\n");
   for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
           if(x[i]==y[j]){
               res[in++]=x[i];
           }
       }
   }
   for(int i=0;i<in;i++){
       printf("%d \n",res[i]);
   }
}
int main(){
  int arr1[5]={1,2,3,4,5},arr2[5]={3,5,10,9,2};
  compare(arr1,arr2);
return 0;
}
