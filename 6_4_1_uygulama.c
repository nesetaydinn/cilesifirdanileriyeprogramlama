/**<
*6_4_1_uygulama.c
*Bu program C dilinde: Bir id değeri alır ve eğer doğru id girildiyse
*İsmi ile birlikte Hoş geldiniz yazısını konsola bastırır. 
*@authr Neşet Aydın
25.05.2020
*Bu Program uygulama 6.4.1 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/K0aKxd7UNe4
*/
#include <stdio.h>
#include "stdlib.h"
/*bir id al, sorgula eğer yanlışsa tekrar döngüye gir, değilse hoş geldiniz yazdır programı kapat.*/
int main(){

int idGiris;

do{
printf("Lutfen Id giriniz;");
scanf("%d",&idGiris);
switch(idGiris){
case 1: printf("Ali Bey");
    break;
case 2: printf("Veli Bey");
    break;
case 3: printf("Fatma Hanim");
    break;
case 4: printf("Ayse Hanim");
    break;
default:
    printf("Yanlis giris yaptiniz\n");
    idGiris=0;
}

}while(!idGiris); //Koşul Yanlış ise Sorgu Doğru
printf(" Hos geldiniz");
    return 0;
}
