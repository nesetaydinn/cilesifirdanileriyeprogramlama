/**<
*8_5_uygulama.c
*Bu program C dilinde: Tek boyutlu bir dizide diziyi bastıran,en küçük,
*en büyük ve aritmetik ortalamayı bulan fonksiyonları içerir.
*@authr Neşet Aydın
*08.02.2021
*Bu Program uygulama 8.5 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: 
*/

#include <stdio.h>
#include <stdlib.h>

#define boyut 15
void bastir(int dizi[]);
int enKucukBul(int dizi[]);
int enBuyukBul(int dizi[]);
int aritmetikOrtAl(int dizi[]);
int main()
{
    int dizi[boyut];

    for(int x=0;x<boyut;x++) dizi[x]=rand()%51;
        bastir(dizi);

        printf("\nEn Kucuk= %d",enKucukBul(dizi));
        printf("\nEn Buyuk= %d",enBuyukBul(dizi));
        printf("\n ORt= %d",aritmetikOrtAl(dizi));


    return 0;
}

void bastir(int dizi[]){
for(int x=0;x<boyut;x++)printf("%d\t",dizi[x] );}

int enKucukBul(int dizi[]){
int enKucuk;
enKucuk=dizi[0];
    for(int x=0;x<boyut;x++)
    if(enKucuk>dizi[x])enKucuk=dizi[x];

    return enKucuk;

}

int enBuyukBul(int dizi[]){
int enKucuk;
enKucuk=dizi[0];
    for(int x=0;x<boyut;x++)
    if(enKucuk<dizi[x])enKucuk=dizi[x];

    return enKucuk;

}
int aritmetikOrtAl(int dizi[]){
    int gecici=0;
for(int x=0;x<boyut;x++)gecici+=dizi[x];
gecici/=boyut;
return gecici;

}
