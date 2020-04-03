/**<
*karsilastirmaOperatorleri.c
*Bu program C dilinde karşılaştırma operatörlerini 
*anlattığımız derste yazılan kodların son halidir.
*@authr Neşet Aydın
*3.04.2020
*Bu Program ders 5.3.1 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/5SaYM2X_lUk
*/
#include "stdio.h"

/*
> Büyük mü?
>= Büyük veya Eþit mi?
< Küçük mü?
<= Küçük veya Eþit mi?
== Eþit mi?
!= Eþit deðil mi?
*/
int main(){
/*
int a,b;

printf("A degerini giriniz;");
scanf("%d",&a);
printf("B degerini giriniz;");
scanf("%d",&b);

if(a == b) printf("%d=%d",a,b);
if(a != b) printf("%d!=%d",a,b);*/
char a;
printf("Bir karakter giriniz;");
scanf("%d",&a);
if('a'==a) printf("Tebrikler bildiniz...");
if('a'!=a) printf("Tuh Bilemediniz...");

return 0;}
