//from a given array differenciate odd and even in separate arrays
#include <stdio.h>
int main(){
    int arr[5],even[5],odd[5],even_index=0,odd_index=0;
    for(int i=0;i<5;i++){
    printf("Enter Element:");
    scanf("%d",&arr[i]);
       if(arr[i]%2==0){
            even[even_index]=arr[i];
            even_index++;
       }
       else{
           odd[odd_index]=arr[i];
           odd_index++;
       }
    }
    printf("TOTAL EVEN ELEMENTS: %d\n",even_index);
    for(int j=0;j<even_index;j++){
       printf("EVEN ARRAY[%d] : %d \n",j,even[j]);
    }
    printf("TOTAL ODD ELEMENTS: %d\n",odd_index);
    for(int j=0;j<odd_index;j++){
       printf("ODD ARRAY[%d] : %d \n",j,odd[j]);
    }
return 0;
}
