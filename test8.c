#include <stdio.h>

char *bt_strcpy(char *dst,char *src)
{
    int i =0;
    while(src[i] != '\0'){
       dst[i] = src[i];
       i++;
    }
    dst[i] = '\0';
    return dst;
}
int main()
{
    char src[4] = "ali";
    char dst[4] ;

    printf("%s", bt_strcpy(dst,src));
}