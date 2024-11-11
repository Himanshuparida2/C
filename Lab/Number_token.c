#include <stdio.h>
#include <string.h>
int main(){
	char str[]="ITER-IBCS-SHM-SUM-IDS";
	char *delimiters="-";
	int numtoken;
	if(strtok(str,delimiters)!=NULL){
		for(numtoken=1;strtok(NULL,delimiters)!=NULL;numtoken++);
	}
	printf("Number Of Token : %d\n",numtoken);
return 0;
}
