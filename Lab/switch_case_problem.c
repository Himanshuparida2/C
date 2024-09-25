#include <stdio.h>
int main(){
    int choice,a,b;
    double div;
    printf("Press 1 : Sum \nPress 2 : Substract \nPress 3 : Multiplication \nPress 4 : Division \nPress 5 : Exit\n");
    printf("Enter Choice:");
    scanf("%d",&choice);
    while(choice!=5){
       switch(choice){
         case 1:
                printf("Enter First Number:\n");
                scanf("%d",&a);
                printf("Enter Second Number:\n");
                scanf("%d",&b);
                printf("Sum: %d \n",a+b);
                break;
        case 2:
               printf("Enter First Number:\n");
               scanf("%d",&a);
               printf("Enter Second Number:\n");
               scanf("%d",&b);
               printf("Substraction: %d\n",a-b);
               break;
        case 3:
              printf("Enter First Number:\n");
              scanf("%d",&a);
              printf("Enter Second Number:\n");
              scanf("%d",&b);
              printf("Multiplication: %d\n",a*b);
              break;
        case 4:
              printf("Enter First Number:\n");
              scanf("%d",&a);
              printf("Enter Second Number:\n");
              scanf("%d",&b);
              div=a/b;
              printf("Division: %f \n",div);
              break;
        default:
               printf("Invalid Choice\n");
       }
       printf("\nPress 1 : Sum \nPress 2 : Substract \nPress 3 : Multiplication \nPress 4 : Division \nPress 5: Exit\n");
       printf("Enter Choice:");
       scanf("%d",&choice);
    }
    return 0;
}
