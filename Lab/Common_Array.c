#include <stdio.h>
int main(){
   int A[3]={1,2,3};
   int B[4]={2,3,4,5};
   int res[2],temp=0;
   //Comparing Array
   for(int i=0;i<sizeof(A)/4;i++){
      for(int j=0;j<sizeof(B)/4;j++){
         if(A[i]==B[j]){
           res[temp]=A[i];
           temp++;
         }
      }
   }
   // Printing The Resultant array
   for(int i=0;i<sizeof(res)/4;i++){
       printf("%d \n",res[i]);
   }
return 0;
}
