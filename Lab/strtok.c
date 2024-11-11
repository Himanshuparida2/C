#include <stdio.h>
#include <string.h>
int main(){
	char str[]="ITER-IBCS-SOA-SUM-ida";
	char ptr[]="iter-ibcs-soa-sum-ida-CSE";
	char *token;
	char *tok2;
	token=strtok(str,"-");
	while(token!=NULL){
		    printf("Token: %s\n",token);
		    token=strtok(NULL,"-");
	}
	tok2=strtok(ptr,"-");
	printf("\n\n");
	while(tok2!=NULL){
		 printf("Token: %s\n",tok2);
		    tok2=strtok(NULL,"-");
	}
	return 0;
}
