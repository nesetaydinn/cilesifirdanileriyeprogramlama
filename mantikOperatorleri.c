/**<
*mantikOperatorleri.c
*Bu program C dilinde mantık operatörlerini 
*anlattığımız derste yazılan kodların son halidir.
*@authr Neşet Aydın
*4.04.2020
*Bu Program ders 5.3.2 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //link
*/

#include "stdio.h"
/*
and &&
or ||
not !
*/
int main(){
/*int sicaklik;
printf("Sicaklik Sensoru gelen veri");
scanf("%d",&sicaklik);

if(sicaklik>= 15 && sicaklik<=25){
     printf("Fan %%25 hizla donuyor");
}*/
char degisken;

printf("Bir Sesli harf giriniz");
scanf("%c",&degisken );
if('a' == degisken || 'e' == degisken ){
            printf("Tebrikler Bildiniz...");
}


return 0;
}
