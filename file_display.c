// new file created as on 10/10/2026
#include <stdio.h>
#include "file_display.h"
void display(char *mess){
 printf("\n");
while (*mess != '\0' )
{ printf("%c", *mess);
  mess++;
}

}