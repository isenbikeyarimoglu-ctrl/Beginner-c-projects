#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int a_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i]){
        i++;
    }
    return(i);
}

void b_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i]){
        putchar(str[i]);
        i++;
    }
}

int main(){
    char cumle[12] = "Ali ata bak";
    b_putstr(cumle);
    printf("\n %d", a_strlen(cumle));
}