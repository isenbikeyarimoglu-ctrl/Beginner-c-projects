#include <stdio.h>
#include <time.h>
#include <ctype.h>
int main(){
  time_t zaman= time(NULL); // time -> null olunca random bir sayı verir
   int zar = zaman % 6 + 1; // bu random sayının 6 ile bol. kalana 1 ekler [1,6] arasında bir değer çıkar
   printf("%d", zar);
}