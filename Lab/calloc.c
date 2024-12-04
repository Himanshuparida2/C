#include <stdio.h>
#include <stdlib.h>
int main(){
	int *ptr;
	ptr=calloc(5,sizeof(int));
	if(ptr != NULL ){
		printf("Memory is Successfully Created\n");
	}
	else{
		printf("Memory is not created\n");
	}
return 0;
}
