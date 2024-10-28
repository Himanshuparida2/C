#include <stdio.h>
void merge(int arr[],int arr1[],int total_size);
int main(){
    int arr[]={1,5,7,11};
    int arr1[]={2,4,6,9};
    int total=(sizeof(arr)/4)+(sizeof(arr1)/4);
    merge(arr,arr1,total);
    return 0;
}
void merge(int arr[],int arr1[],int total_size){
    int max[total_size],ind=0,id=0;
    while(id!=total_size){
        if(arr[ind]<arr1[ind]){
            max[id++]=arr[ind];
            max[id++]=arr1[ind];
        }
        else{
            max[id++]=arr1[ind];
            max[id++]=arr[ind];
        }
        ind++;
    }
    for(int i=0;i<id;i++){
        printf("%d ",max[i]);
    }
    printf("\n");
}