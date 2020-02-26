/*4.2 dersimizde anlattığımız printf(); ve scanf(); fonksiyonlarının kullanımı:
*1. printf(); Fonksiyonu;
*Değişken bastırma için kullanılan operatörler;
*integer(Tam Sayı)= %d
*Float(Ondalıklı(Kesirli Sayı))=%f
*Double(Ondalıklı(Kesirli Sayı))=%lf
*Bir sayının Octal(sekizlik sayı) karşılığı=%o
*Bir sayının Hex(on altılık sayı) karşılığı=%x
*Bir karakter=%c
*Bir karakter dizisi=%s
*% işareti bastırmak için önüne bir % daha eklemek lazım.
*örneğin %%f gibi.
*Yeni satır= \n 
*Bir tab kadar boşluk= \t
*Ondalıklı sayılarda= %.(sayı)f  noktadan sonra yazılan değer kadar sayı alır.
*örneğin %.2f => 10.02 gibi.
*%0(sayı)d girilen sayıdan değişkenin değerini çıkartıp başına kalan sonuç kadar 0 ekler.
*%(sayı)d ise boşluk koyar.
* %.(sayı)s ise kaç karaterin basılacağını söyler.
*2. scanf(); Fonksiyonu;
*değişkenlere değer & ile gönderilir.
*/

#include "stdio.h"
int main(){

printf("Selamun Aleykum\n");
int intValue=10;
int intValue2=15;
int intValue3=16;
float floatValue=15.1234;
double doubleValue=15.123456;
printf("Ondalikli Tam Sayi\t%d\n",intValue);
printf("Tam Sayi\t%i\n",intValue2);

printf("Double Sayi\t%lf\n",doubleValue);
printf("Tam Sayi\t%d\n",intValue3);
printf("Tam Sayi Octal\t%o\n",intValue3);
printf("Tam Sayi Hex\t%x\n",intValue3);

printf("Float Sayi %%f\t%f\n",floatValue);
printf("Float Sayi\t%.3f\n",floatValue);


char charValue=97;
char charValue2='a';
printf("char \t%c\n",charValue);
printf("char \t%c\n",charValue2);


char stringValue[4]="asd";


printf("string \t%.2s\n",stringValue);
printf("string \t%s\n",stringValue);

printf("Tam Sayi \ta%d\n",intValue2);
printf("Tam Sayi \ta%5d\n",intValue2);

printf("\n\nscanf();\n\n");

printf("Tam Sayinin tututldugu adres \t%d\n",&intValue);
printf("Tam Sayinin \t%d\n",intValue);
scanf("%d", &intValue);
printf("Tam Sayinin tututldugu adres \t%d\n",&intValue);
printf("Tam Sayinin \t%d\n",intValue);
return 0;
}

/*Programın Konsola Çıktısı;
Selamun Aleykum
Ondalikli Tam Sayi      10
Tam Sayi        15
Double Sayi     15.123456
Tam Sayi        16
Tam Sayi Octal  20
Tam Sayi Hex    10
Float Sayi %f   15.123400
Float Sayi      15.123
char    a
char    a
string  as
string  asd
Tam Sayi        a15
Tam Sayi        a   15


scanf();

Tam Sayinin tututldugu adres    6422272
Tam Sayinin     10
35
Tam Sayinin tututldugu adres    6422272
Tam Sayinin     35

Process returned 0 (0x0)   execution time : 2.185 s
Press any key to continue.


*/
