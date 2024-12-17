#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *fp;
	char buffer[256];
	char vowels[]={'a','e','i','o','u'};
	int i,count=0,n,j;
	fp=fopen("text.txt","r");
	if(fp==NULL){
		printf("File Does not Exists.\n");
		exit(0);
	}
	while(!feof(fp)){
		fgets(buffer,256,fp);
		n=strlen(buffer);
		for(i=0;i<n;i++){
			for(j=0;j<5;j++){
				if(buffer[i]==vowels[j]){
					count++;
				}
			}
		}
	}
	printf("Total Vowels are %d\n",count);
	fclose(fp);
return 0;
}
