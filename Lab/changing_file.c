#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	FILE *fileptr;
	char buffer[256];
	int i,n;
	fileptr=fopen(argv[1],"r");
	if(fileptr==NULL){
		printf("File Does not Exists.\n");
		exit(1);
	}
	while(!feof(fileptr)){
		fgets(buffer,256,fileptr);
		n=strlen(buffer);
		for(i=0;i<n;i++){
			if(buffer[i]=='.'){
				i++;
				while(buffer[i]==' '){
					i++;
				}
				if(buffer[i]>=20 && buffer[i]<=40){
					buffer[i]=buffer[i]-32;
				}
			}
		}
		fputs(buffer,fileptr);
	}
	fclose(fileptr);
return 0;
}
