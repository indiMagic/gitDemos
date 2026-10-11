//This is main file
#include <stdio.h>
#include "display_file.h"
void show(void){
printf("This is demo");
}
void main(){
// first step
char *mess1 = "Hello how are you";
int i;
i = 0;
show();
display(mess1);
}
