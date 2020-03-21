/**<
*intDegiskenTipi.c
*Bu program C dilinde kullanılan int Veri Tiplerinin
*bayt bilgisini konsola bastırır ve
*programda basit uygulamaları vardır.
*@authr Neşet Aydın
*21.03.2020
*Bu Program ders 5.1.3 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/V8v1DGRN_do
*/

#include "stdio.h"
#include "limits.h"


int main(){
printf("%d\n",sizeof(int));
printf("%d\n",sizeof(long int));
printf("%d\n",sizeof(short int));
printf("%d\n",sizeof(long long int));
printf("\n\n");
int sayi =65;
int karakter ='A';

printf("%c %d\n",sayi,sayi);
printf("%c %d\n",karakter,karakter);

printf("%c %d\n",sayi+karakter,sayi+karakter);
return 0;}
