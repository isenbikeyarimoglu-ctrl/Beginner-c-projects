#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//this program dublicates a text
char *my_strdup(const char *src){
   size_t i = 0;
   while (src[i] != '\0') i++;
   
   char *dup = malloc(i + 1);

   for (size_t j = 0; j < i; j++) {
      dup[j] = src[j];
   }
   dup[i] = '\0';
   return dup;
}

int main(void)
{
   char *dup = my_strdup("Merhaba");
   printf("%s\n", dup);
   free(dup);
   return 0;


}
