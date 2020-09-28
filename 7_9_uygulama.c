/**<
*7_9_uygulama.c
*Bu program C dilinde: main fonksiyonuna parametre aktarımı örneğidir.
*@authr Neşet Aydın
*28.09.2020
*Bu Program uygulama 7.9 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: https://youtu.be/RWJOj0zYndM
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void uyari();
int main(int argSayi,char * argVector[]){
    /*-t -ci -b -ca*/ /*1. deger 2 deger*/
    int d1,d2;

    if(argSayi>1){
            if(argSayi !=4){
               printf("Eksik arguman girdiniz");
uyari();
            }
            else {
    d1=atoi(argVector[2]);
    d2=atoi(argVector[3]);
         if(strcmp("-t",argVector[1])==0){ printf("Sonuc =%d",d1+d2); }
         else if(strcmp("-ci",argVector[1])==0){  printf("Sonuc =%d",d1-d2); }
         else if(strcmp("-b",argVector[1])==0){  printf("Sonuc =%d",d1/d2); }
         else if(strcmp("-ca",argVector[1])==0){  printf("Sonuc =%d",d1*d2); }
        else {
            printf("Hatali bir arguman girdiniz\n");
uyari();
        }
            }

    }
    else printf("Arguman Girmediniz...");

    return 0;
}
void uyari(){
                   printf("\nIslem Secimleri \n Toplama icin -t\n Cikarma -ci\n Bolme -b\n Carpma -ca\n");
               printf("ARDİNDAN BIR BOSLUK ILE SAYILARI GIRINIZ. ");
}
