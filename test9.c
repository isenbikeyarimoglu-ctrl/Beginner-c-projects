#include <stdio.h>

int atoi(const char *str){
    int i = 0;
    int res = 0;

    while(str[i] <= '9' && str[i] >= '0'){
        
        res = res * 10 + (str[i] - '0');
        i++;

    }
    return(res);
}
int main(){

   char *num = "1453";
   int ret = atoi(num);
   printf("%d",ret);

}