/**<
*sabitIfadeler.c
*Bu program C dilinde sabit ifadeleri
*anlattığımız derste yazılan kodların son halidir.
*@authr Neşet Aydın
*01.04.2020
*Bu Program ders 5.2 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //link
*/
/* \ sabitleri;
* \a beep sesi
* \b backspace
* \f form besleme
* \n yeni satır
* \r satır başı
* \t yatay tab kadar boşluk
* \v dikey tab kadar boşluk
* \' tek tırnak Kullanıma örnek 35.satırda
* \" çift tırnak
* \\ ters eğik çizgi
* \0 null
* \? sorı işareti
* \O 3 basamağa kadar octal sayı
* \xH	hex ifade örneğin \xfff
* \XH hex ifade örneğin \xfff
*/
#include "stdio.h"
#define s2 100

int main(){

int d1;
d1=10;
const int s1=150;
printf("d1 %d \ns1 %d \ns2 %d \n",d1,s1,s2);
scanf("%d",&d1);
scanf("%d",&s1);
scanf("%d",&s2);
char tektirnak ='\'';
printf("d1 %d \ns1 %d \ns2 %d \n",d1,s1,s2);

return 0;
}
