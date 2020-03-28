/**<
*voidDegiskenTipi.c
*Bu program C dilinde kullanılan void Veri Tiplerinin
*bayt bilgisini konsola bastırır ve
*programda basit uygulamaları vardır.
*@authr Neşet Aydın
*28.03.2020
*Bu Program ders 5.1.6 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //link
*/
#include "stdio.h"

int fonk(){
return 15;
}
void fonk2(int deger){
printf("%d\n",deger);
}
int main(){
printf("size of fonk %d\n",sizeof(fonk()));
printf("fonk %d\n",fonk());
fonk2(fonk());
return 0;
}
