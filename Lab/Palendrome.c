#include <stdio.h>
#include <string.h>
int main(){
	char str[]="BIRYRIB";
	char temp[20];
	int i,ind=0;
	for(i=strlen(str)-1;i>=0;i--){
	     temp[ind]=str[i];
	     ind++;
	}
	temp[ind]='\0';
	if(strcmp(temp,str)==0){
	   printf("The Sting is a Palendrome\n");
	}
	return 0;
}
