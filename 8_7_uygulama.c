/**<
*8_7_uygulama.c
*Bu program C dilinde: Quick Sort (Hızlı sıralaması) algoritması kullanarak dizi elemanlarını
küçükten büyüğe sıralıyan fonksiyonun yazılasını içerir.
*@authr Neşet Aydın
*09.03.2021
*Bu Program uygulama 8.7 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: https://youtu.be/S8CKBEY3nsg
*/
#include <stdio.h>
#include <stdlib.h>
void hizliSiralama(int dizi[],int sol,int sag);
void rastgeleDegerler(int dizi[],int boyut);
void bastir(int dizi[],int boyut);
void degistir(int * d1, int *d2);
int main()
{
    int dizi[10];
    int diziBoyut=(sizeof(dizi)/sizeof(int));
    printf("%d\n",diziBoyut);
    rastgeleDegerler(dizi,diziBoyut);
    bastir(dizi,diziBoyut);
    hizliSiralama(dizi,0,diziBoyut-1);
    bastir(dizi,diziBoyut);
    return 0;
}

void rastgeleDegerler(int dizi[],int boyut){
    for(int s=0;s<boyut;s++)dizi[s]=(rand()%150);
}
void bastir(int dizi[],int boyut){
    for(int s=0;s<boyut;s++)printf("%d\t",dizi[s]);
    printf("\n");
}
void hizliSiralama(int dizi[],int sol,int sag){

int x,y,pivot;
    x=sol;
    y=sag;
    pivot=dizi[(x+y)/2];
   // pivot=(int)((x+y)/2);
    while(x<=y){
        while(dizi[x]<pivot && x<sag)x++;
        while(dizi[y]>pivot && y>sol)y--;
        if(x<=y){
            degistir(&dizi[x],&dizi[y]);
            x++; y--;
        }
    }
    if(sol<y)hizliSiralama(dizi,sol,y);
    if(x<sag)hizliSiralama(dizi,x,sag);
}
void degistir(int * d1, int *d2){
    int degisken;
    degisken=*d1;
    *d1=*d2;
    *d2=degisken;
}
