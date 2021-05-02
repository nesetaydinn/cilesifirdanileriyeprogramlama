/**<
*8_10_ders.c
*Bu program C dilinde: İki boyutlu dizileri üzerinde
*toplama ve çıkarma işlemlerini yapan fonksiyonları içerir.
*@authr Neşet Aydın
*02.05.2021
*Bu Program uygulama 8.10 için yazılan programın son halidir.
*Algoritmanın dans olarak anlatıldığı video: 
*Videoya linkten ulaşabilirsiniz: 
*/
#include <stdio.h>
#include <stdlib.h>
void matriseSiraliDegerAta(int x,int y,int m[y][x]);
void matrisiBastir(int x,int y,int m[y][x]);
void matriseRastgeleDegerAta(int x,int y,int m[y][x]);
void matrisTopla(int x, int y, int m1[y][x], int m2[y][x],int mSonuc[y][x]);
void matrisCikart(int x, int y, int m1[y][x], int m2[y][x],int mSonuc[y][x]);
float radyanDonusum(int girdi);

int main(){
    int x=4,y=5;
    int m1[y][x];
    int m2[y][x];
    int m3[y][x];
    matriseRastgeleDegerAta(x,y,m1);
    matriseRastgeleDegerAta(x,y,m2);
    printf("1. matris:\n");
    matrisiBastir(x,y,m1);
    printf("2. matris:\n");
    matrisiBastir(x,y,m2);
    matrisTopla(x,y,m1,m2,m3);
    printf("matrisler toplami sonuc:\n");
    matrisiBastir(x,y,m3);
    matrisCikart(x,y,m3,m2,m3);
    printf("matrisler cikarma sonuc:\n");
    matrisiBastir(x,y,m3);
   /* printf("Sutun sayisini giriniz:");
    scanf("%d",&x);
    printf("Satir sayisini giriniz:");
    scanf("%d",&y);
    int m[y][x];
    matriseSiraliDegerAta(x,y,m);
    matrisiBastir(x,y,m);*/

    return 0;
}

void matriseSiraliDegerAta(int x,int y,int m[y][x]){
    if(!(x>0) || !(y>0)) return;
int sayac=0;
    for(int sY=0;sY<y;sY++)
        for(int sX=0;sX<x;sX++){
            m[sY][sX]=sayac;
            sayac++;
    }
}
void matriseRastgeleDegerAta(int x,int y,int m[y][x]){
    if(!(x>0) || !(y>0)) return;
    for(int sY=0;sY<y;sY++)
        for(int sX=0;sX<x;sX++)
            m[sY][sX]=rand()%51;


}
void matrisiBastir(int x,int y,int m[y][x]){
    if(!(x>0) || !(y>0)) return;

    for(int sY=0;sY<y;sY++){
        for(int sX=0;sX<x;sX++)
           printf("%d\t", m[sY][sX]);
  printf("\n");
    }
}
void matrisTopla(int x, int y, int m1[y][x], int m2[y][x],int mSonuc[y][x]){
    for(int sY=0;sY<y;sY++)
        for(int sX=0;sX<x;sX++)mSonuc[sY][sX]=m1[sY][sX]+m2[sY][sX];
}
void matrisCikart(int x, int y, int m1[y][x], int m2[y][x],int mSonuc[y][x]){
    for(int sY=0;sY<y;sY++)
        for(int sX=0;sX<x;sX++)mSonuc[sY][sX]=m1[sY][sX]-m2[sY][sX];
}


