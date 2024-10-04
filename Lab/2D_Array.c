#include <stdio.h>
int main(){
    int A[2][2];
    int B[2][3];
    int R[2][3];

    //For Matrix A
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Enter Array Element arr[%d][%d] :", i,j);
            scanf("%d",&A[i][j]);
        }
    }

//For Matrix B

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
             printf("Enter Array Element arr[%d][%d] :", i,j);
             scanf("%d",&B[i][j]);
        }
    }

    //Mutiplication of A and B
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            R[i][j]=0;
            for(int k=0;k<2;k++){
                R[i][j]+=A[i][k]*B[k][j];
            }
            printf("%d  ",R[i][j]);
        }
        printf("\n");
    }

    return 0;
}
