#include <stdio.h>
#include <ctype.h>
int main(){
    int a = 5; // a^b ye kadar bütün 5in üslerini alır 
    int b = 6;
    int c = 1;
    for(int i = 0; i < b; i++){
        c = c * a; // i b den küçük olana kadar a yı kendisi ile çarpar.
        printf("%d \n", c);
    }
    return (0);
}