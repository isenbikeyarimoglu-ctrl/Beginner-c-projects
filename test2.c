#include <stdio.h>
#include <ctype.h>


int main(void)
{
 char girdi = getchar(); 
 printf("decimal:%d ,\n char %c \n", girdi, girdi);
 if(girdi >= 48 && girdi <= 57){
    printf("rakamdir");
 } else {
  printf("rakam degildir");
 }
}

