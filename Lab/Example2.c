#define length 10
#include <stdio.h>
int main(void){
     char dept[length],days[length];
     int course,time;
     printf("Enter Department Code, Course number, days and ");
     printf("time like this :\n> COSC 2060 MWF 1410\n");
     scanf("%s %d %s %d",dept,&course,days,&time);
     printf("%s %d meets %s at %d\n",dept,course,days,time);
return 0;
}
