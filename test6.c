
#include <stdio.h>

int cikar(int a, int b){
    return(a - b);
}
int main(){
    int c;
    int d;
    printf("buyuk olan: ");
    scanf("%d", &c);
    printf("kucuk olan: ");
    scanf("%d", &d);
    int sonuc = cikar(c,d);
    printf("Sonuc: %d", sonuc);
    return 0;
}