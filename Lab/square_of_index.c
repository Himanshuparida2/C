//Program having the array values as the square of the index
#include <stdio.h>
int main(){
     int n;
     printf("Enter The Size of Array: \n");
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++){
           arr[i]=i*i;
           printf("ARRAY[%d] : %d  %p\n",i,i*i,&arr[i]);
     }
return 0;
}
