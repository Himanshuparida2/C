#include <stdio.h>
void draw_circle();
void draw_stick();
void draw_hands();
void draw_legs();
int main(){
draw_circle();
draw_stick();
draw_legs();
return 0;
}
void draw_circle(){
printf("   * * \n");
printf(" *     *\n");
printf("*       *\n");
printf(" *     *\n");
printf("   * *\n");
}
void draw_stick(){
  printf("   /|\\ \n");
  printf("  / | \\ \n");
  printf("    | \n");
  printf("    |\n");
}
void draw_legs(){
printf("   / \\\n");
printf("  /   \\\n");
}
