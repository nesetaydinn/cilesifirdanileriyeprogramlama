/**<
*8_6_uygulama.c
*Bu program C dilinde: Bubble Sort (Kabarcık sıralaması) algoritması kullanarak dizi elemanlarını
küçükten büyüğe sıralıyan fonksiyonun yazılasını içerir.
*@authr Neşet Aydın
*08.02.2021
*Bu Program uygulama 8.6 için yazılan programın son halidir.
*Algoritmanın dans olarak anlatıldığı video: 
*Videoya linkten ulaşabilirsiniz: https://youtu.be/ODHpOLYZbUY
*/
#include <stdio.h>
#include <stdlib.h>

#define boyut 5

void bastir(int dizi[]);
void kabarcikSiralamaBuyuktenKucuge(int dizi[]);
void kabarcikSiralamaKucuktenBuyuge(int dizi[]);

int main()
{
    int dizi[boyut];
    for(int i=0;i<boyut;i++)dizi[i]=rand()%51;
    bastir(dizi);
    kabarcikSiralamaBuyuktenKucuge(dizi);
    return 0;
}

void kabarcikSiralamaBuyuktenKucuge(int dizi[]){


    for(int i=boyut-1;i>0;i--) //iteraston
        for(int j=0;j<boyut-1;j++){
            if(dizi[j]<dizi[j+1]){
                int temp =dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=temp;
            }
        }
        bastir(dizi);
}

void kabarcikSiralamaKucuktenBuyuge(int dizi[]){


    for(int i=boyut-1;i>0;i--) //iteraston
        for(int j=0;j<boyut-1;j++){
            if(dizi[j]>dizi[j+1]){
                int temp =dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=temp;
            }
        }
        bastir(dizi);
}
void bastir(int dizi[]){
for(int i=0;i<boyut;i++)printf("%d\t",dizi[i]);
printf("\n\n");}
