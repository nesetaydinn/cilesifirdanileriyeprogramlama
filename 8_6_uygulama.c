/**<
*8_6_uygulama.c
*Bu program C dilinde: Bubble Sort (Kabarcık sıralaması) algoritması kullanarak dizi elemanlarını
küçükten büyüğe sıralıyan fonksiyonun yazılasını içerir.
*@authr Neşet Aydın
*08.02.2021
*Bu Program uygulama 8.6 için yazılan programın son halidir.
*Algoritmanın dans olarak anlatıldığı video: https://www.youtube.com/watch?v=lyZQPjUT5B4
*Videoya linkten ulaşabilirsiniz: 
*/
#include <stdio.h>
#include <stdlib.h>

#define boyut 5
void bastirDizi(int dizi[]);
void kabarcikSiralama(int dizi[]);
int main()
{
    int dizi[boyut];

    for (int x=0;x<boyut;x++)dizi[x]=rand()%100;
    bastirDizi(dizi);
    kabarcikSiralama(dizi);

    return 0;
}

void bastirDizi(int dizi[]){
    printf("\n\n");
for (int x=0;x<boyut;x++)printf("%d ",dizi[x]);
}
void kabarcikSiralama(int dizi[]){

int gecici;

for (int x=0;x<boyut-1;x++){
   for(int y=0;y<boyut-1;y++){
    if(dizi[y]>dizi[y+1]){
        gecici=dizi[y];
        dizi[y]=dizi[y+1];
        dizi[y+1]=gecici;
    }
}
printf("iterasyon alindi");
bastirDizi(dizi);
}
printf("Bitti");bastirDizi(dizi);;

}
