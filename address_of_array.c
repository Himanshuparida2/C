#include <stdio.h>
int main(){
int arr[4][2]={{12,1},{13,2},{14,3},{15,4}};
for(int i=0;i<4;i++){
   printf("The Address Of %d element of 1D Array : %ld\n",i,(long)arr[i]);
}
return 0;
}
