#include <stdio.h>
#include <stdlib.h>
int main(){
	int *ptr,i;
	ptr=(int*)malloc(sizeof(int));	//Allocating for a single integer (4 Byte)
	ptr[0]=1;
	ptr=realloc(ptr,3*sizeof(int));
	ptr[1]=2;
	ptr[2]=3;
	for(i=0;i<3;i++){
		printf("%d\n",ptr[i]);
	}
return 0;
}
