#include <stdio.h>
//this is gcd computating program
int main(){
    
    int a;
    int b; 
    int ekok = a * b;

    printf("ilk sayi: ");
    scanf("%d", &a);

    printf("ikinci sayi: ");
    scanf("%d", &b);

    if(a > b){
        for(int i = a ; i >= a && i >= b; i++){
            if(i % a == 0 && i % b == 0){
                ekok = i;
                break;
            }
        }
    }else if(b > a){
            for(int i = b ; i >= a && i >= b; i++){
            if(i % a == 0 && i % b == 0){
                ekok = i;
                break;
            }
        }
    }else{
        ekok = a;
    }
     
    printf("EKOK(%d,%d) = %d", a ,b ,ekok);
    
}
