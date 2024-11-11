#include <stdio.h>
#include <string.h>
int main(void){
    FILE *inp,*out;
    char infile[80], outfile[80], item[100];
    char *status;
    int i=0;
    printf("Enter Input Fie Name: ");
    scanf("%s",infile);
    printf("Enter Output File Name: ");
    scanf("%s",outfile);
    inp=fopen(infile,"r");
    out=fopen(outfile,"w");
   while(fscanf(inp,"%s",item)!=EOF){
     fprintf(out,"%s\n",item);
     printf(">> %s\n",item);
   }
   fclose(inp);
   fclose(out);
 return 0;
}
