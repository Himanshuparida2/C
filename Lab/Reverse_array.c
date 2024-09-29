//From a Given Array reverse the array and Store the element in another Array 
#include <stdio.h>
int main(){
      int arr[5],revarr[5],j=4;
      for(int i=0;i<5;i++){
        printf("Enter Elements of the array: ");
        scanf("%d",&arr[i]);
        revarr[j]=arr[i];
        j--;
      }
      for(j=0;j<5;j++){
           printf("Reverse ARRAY[%d] : %d\n",j,revarr[j]);
      }
 return 0;
}
