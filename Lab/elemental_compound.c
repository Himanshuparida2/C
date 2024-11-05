#define com_len 30
#define ele_len 10
#include <stdio.h>
int main(){
    char compound[com_len];
    char ele[ele_len];
    int first=0;
    printf("Enter a Compound: ");
    scanf("%s",compound);
    for(int i=2;i<strlen(compound);i++){
        if(compound[i]>='A' && compound[i]<='Z'){
            strncpy(ele,&compound[first],i-first);
            ele[i-first]='\0';
            printf("%s\n",ele);
            first=i;
        }
    }
    printf("%s\n",strcpy(ele,&compound[first]));
    return 0;
}