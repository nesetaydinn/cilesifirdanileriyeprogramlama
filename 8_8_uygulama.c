/**<
*8_8_uygulama.c
*Bu program C dilinde: Binary Search (İkili Arama) algoritması kullanarak dizi elemanları
içerisinde aradığımız bir değerin kaçıncı indiste bulunduğunu döndüren fonksiyonun yazılasını içerir.
*@authr Neşet Aydın
*22.03.2021
*Bu Program uygulama 8.8 için yazılan programın son halidir.
*Algoritmanın dans olarak anlatıldığı video: 
*Videoya linkten ulaşabilirsiniz: https://youtu.be/zGZSWEhuVH0
*/
#include <stdio.h>
#include <stdlib.h>
void hizliSiralama(int dizi[],int sol,int sag);
void rastgeleDegerler(int dizi[],int boyut);
void bastir(int dizi[],int boyut);
void degistir(int * d1, int *d2);
int ikiliArama(int dizi[],int diziBoyut,int aranan);
int main()
{
    int dizi[1000];
    int diziBoyut=(sizeof(dizi)/sizeof(int));
    rastgeleDegerler(dizi,diziBoyut);
    hizliSiralama(dizi,0,diziBoyut-1);
    bastir(dizi,diziBoyut);
    int degInd=rand()%1000;
    printf("aradigim degerin indisi = %d\t degisken degeri = %d\n",degInd,dizi[degInd]);
    printf("Indis %d",ikiliArama(dizi,diziBoyut,dizi[degInd]));
    return 0;
}
int ikiliArama(int dizi[],int diziBoyut,int aranan){
    int sag,sol,orta;
    sag=diziBoyut-1;
    sol=0;
    int sayac=0;

    for(;sol<=sag;){
        orta=(sag+sol)/2;
        if(dizi[orta]==aranan) return orta;
        else if(dizi[orta]<aranan)sol=orta+1;
        else sag=orta-1;
    sayac++;
    printf("%d Iterasyon\n",sayac);
    }
    return -1;

}
void rastgeleDegerler(int dizi[],int boyut){
    for(int s=0;s<boyut;s++)dizi[s]=(rand()%1500);
}
void bastir(int dizi[],int boyut){
    for(int s=0;s<boyut;s++)printf("%d.Indis = %d\t",s,dizi[s]);
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
