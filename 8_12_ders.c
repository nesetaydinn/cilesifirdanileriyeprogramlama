/**<
*8_12_ders.c
*Bu program C dilinde: Bir matrisi vektöre atıyan fonksiyonun
*yazıldığı dersin kaynak kodlarıdır.
*@authr Neşet Aydın
*11.05.2021
*Bu Program uygulama 8.12 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz:
*/
#include <stdio.h>
#include <stdlib.h>
void matriseSiraliDegerAta(int x,int y,int m[y][x]);
void matrisiBastir(int x,int y,int m[y][x]);
void matriseRastgeleDegerAta(int x,int y,int m[y][x]);
void matrisTopla(int x, int y, int m1[y][x], int m2[y][x],int mSonuc[y][x]);
void matrisCikart(int x, int y, int m1[y][x], int m2[y][x],int mSonuc[y][x]);
void matrisCasrp(int x, int y, int z,int satirMatris[y][x],int sutunMatris[x][z],int sonucMatris[y][z]);
void matrisiVektoreAta(int x,int y,int boyut,int matris[y][x],int vektor[]);
void vektorBastir(int boyut,int vektor[]);
int main(){
  //Matrislerde işlemler 1 - 2
  /*  int x=4,y=5;
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
    matrisiBastir(x,y,m3);*/
   /* printf("Sutun sayisini giriniz:");
    scanf("%d",&x);
    printf("Satir sayisini giriniz:");
    scanf("%d",&y);
    int m[y][x];
    matriseSiraliDegerAta(x,y,m);
    matrisiBastir(x,y,m);*/

    //Matrislerde işlemler 3
  
  /*  int x=4,y=5,z=3;
    int m1[y][x];
    int m2[x][z];
    int m3[y][z];
    matriseSiraliDegerAta(x,y,m1);
    matriseSiraliDegerAta(z,x,m2);
        printf("1. matris:\n");
            matrisiBastir(x,y,m1);
        printf("2. matris:\n");
            matrisiBastir(z,x,m1);
            printf("Carpma Sonucu:\n");
        matrisCasrp(x,y,z,m1,m2,m3);
            matrisiBastir(z,y,m3);
*/

  //Matrislerde işlemler 4
    int x=3,y=4;
    int boyut=x*y;
    int m[y][x];
    int v[boyut];

    matriseSiraliDegerAta(x,y,m);
    matrisiBastir(x,y,m);
    matrisiVektoreAta(x,y,boyut,m,v);
    vektorBastir(boyut,v);
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
void vektorBastir(int boyut,int vektor[]){
    matrisiBastir(boyut,1,vektor);
}
void matrisTopla(int x, int y, int m1[y][x], int m2[y][x],int mSonuc[y][x]){
    for(int sY=0;sY<y;sY++)
        for(int sX=0;sX<x;sX++)mSonuc[sY][sX]=m1[sY][sX]+m2[sY][sX];
}
void matrisCikart(int x, int y, int m1[y][x], int m2[y][x],int mSonuc[y][x]){
    for(int sY=0;sY<y;sY++)
        for(int sX=0;sX<x;sX++)mSonuc[sY][sX]=m1[sY][sX]-m2[sY][sX];
}
void matrisCasrp(int x, int y, int z,int satirMatris[y][x],int sutunMatris[x][z],int sonucMatris[y][z]){

int araToplam;

    for(int sY=0;sY<y;sY++)
    for(int sZ=0;sZ<z;sZ++){
        araToplam=0;
        for(int sX=0;sX<x;sX++)araToplam+=satirMatris[sY][sX]*sutunMatris[sX][sZ];
            sonucMatris[sY][sZ]=araToplam;
    }
}
void matrisiVektoreAta(int x,int y,int boyut,int matris[y][x],int vektor[]){
    if((x*y)>boyut)return;
    int vekSayac=0;
    for(int sY=0;sY<y;sY++)
    for(int sX=0;sX<x;sX++){
        vektor[vekSayac]=matris[sY][sX];
        vekSayac++;
    }
}
