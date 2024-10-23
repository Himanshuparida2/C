#include <stdio.h>
int main(){
int arr[4][2]={{12,1},{13,2},{14,3},{15,4}};
for(int i=0;i<4;i++){
      printf("The Address of %d element of the 1D Array : %ld \n",i,(long)arr[i]);
      printf("The Address of 2nd element od the 1D Array : %ld\n",(long)(arr[i]+1));
}
return 0;
}
