/**<
*boolDegiskenTipi.c
*Bu program C dilinde kullanılan bool Veri Tiplerinin
*bayt bilgisini konsola bastırır ve
*programda basit uygulamaları vardır.
*@authr Neşet Aydın
*28.03.2020
*Bu Program ders 5.1.7 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //link
*/
#include "stdio.h"
#include "stdbool.h"

int main(){

bool test=false;
printf("bool = %s",test );
printf("bool ne kadar yer tutar= %d",sizeof(bool) );
return 0;
}
