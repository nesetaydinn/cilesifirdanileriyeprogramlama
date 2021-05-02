/**<
*8_9_ders.c
*Bu program C dilinde: İki boyutlu dizileri yani matrisleri farklı 
*satır ve sütunlar için bir fonksiyona nasıl aktarma işlemlerini yapar.
*Örnek olarak matriseSiraliDegerAta ve matrisiBastir metotları yazılmıştır.
*@authr Neşet Aydın
*22.04.2021
*Bu Program uygulama 8.9 için yazılan programın son halidir.
*Algoritmanın dans olarak anlatıldığı video: 
*Videoya linkten ulaşabilirsiniz: https://youtu.be/DYuQxdGwBcs
*/
#include <stdio.h>
#include <stdlib.h>
void matriseSiraliDegerAta(int x,int y,int m[y][x]);
void matrisiBastir(int x,int y,int m[y][x]);
int main(){
    int x,y;
    printf("Sutun sayisini giriniz:");
    scanf("%d",&x);
    printf("Satir sayisini giriniz:");
    scanf("%d",&y);
    int m[y][x];
    matriseSiraliDegerAta(x,y,m);
    matrisiBastir(x,y,m);
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
void matrisiBastir(int x,int y,int m[y][x]){
    if(!(x>0) || !(y>0)) return;

    for(int sY=0;sY<y;sY++){
        for(int sX=0;sX<x;sX++)
           printf("%d\t", m[sY][sX]);
  printf("\n");
    }
}
