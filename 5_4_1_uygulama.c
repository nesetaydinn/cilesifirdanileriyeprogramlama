/**<
*5_4_1_uygulama.c
*Bu program C dilinde: Bir klavyeden bir tam sayı alıp,
*sayının tek ve negatif olup olmadığını bulan 
*ve sonucuna göre bize true veya false değerlerini döndüren 
*bir fonksiyonu ve uygulamasını içerir.
*@authr Neşet Aydın
*29.04.2020
*Bu Program uygulama 5.4.1 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/s61XbkBYf6U
*/
#include "stdio.h"
#include "stdbool.h"
/*Bir tam sayı al,
negatif mi?
sayı tek mi?*/
int negatifVeTekMi(int tamSayi){

return ( tamSayi%2 ==-1) ? true : false;

}

int main(){
int x;
printf("Bir Tam Sayi Giriniz");
scanf("%d",&x);

printf("%d",negatifVeTekMi(x));
return 0;
}
