#include <stdio.h>
#define size 10
int is_identity(int arr[size][size],int row);
int main(){
    int row;
    printf("Enter the no. of row: \n");
    scanf("%d",&row);
    int arr[row][row];
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            printf("Enter Element : ");
            scanf("%d",&arr[i][j]);
        }
    }
    if(is_identity(arr,row)){
        printf("\nIt is a Identity Matrtix\n");
    }
    else{
        printf("\nIt is not identity Matrix\n");
    }
    return 0;
}
int is_identity(int arr[size][size],int row){
    int count=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            if(i==j && arr[i][j]!=1){
                return 0;
            }
            else if(arr[i][j]!=0){
                return 0;
            }
            else{
                return 1;
            }
        }
    }
}