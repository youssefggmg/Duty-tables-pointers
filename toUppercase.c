#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char *string="this is my string";
    
    printf("this is the string in lower case %s and this on is in upper %s",string,toupper(*string));
    
}