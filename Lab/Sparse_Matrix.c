#include <stdio.h>

void is_sparse(int arr[4][4]);

int main() {
    int arr[4][4];
    printf("Enter The Elements :\n");
    for(int i=0;i<4;i++){
        for(int j=0;j,4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    is_sparse(arr);
    return 0;
}

void is_sparse(int arr[4][4]) {
    int count = 0;
    int totalElements = 4 * 4;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] == 0) {
                count++;
            }
        }
    }
    if (count > totalElements / 2) {
        printf("The array is a Sparse Matrix.\n");
    } else {
        printf("The array is Not a Sparse Matrix.\n");
    }
}
