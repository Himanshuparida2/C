#include <stdio.h>
void add_array(int x[],int y[]);
int main(){
int arr1[] = {1,2,3,4,5},arr2[] = {6,7,8,9,10};
add_array(arr1,arr2);
return 0;
}
void add_array(int x[],int y[]){
   int res[5];
   for(int i=0;i<5;i++){
         res[i]=x[i]+y[i];
         printf("Array [%d] : %d \n",i,res[i]);
   }
}
