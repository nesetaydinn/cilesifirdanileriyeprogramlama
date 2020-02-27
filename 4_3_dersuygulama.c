/*3 tam sayı alacak, ilk ikisini bir biriyle toplayıp 3. sayıya bölecek ve bununda çıktı olarak vericek programı yaz.

int a,b,c,d;
printf("1. Degeri gir;");
scanf("%d",&a);
printf("2. Degeri gir;");
scanf("%d",&b);
printf("3. Degeri gir;");
scanf("%d",&c);
d=(a+b)/c;
printf("%d",d);
*/

/*2 gerçel sayı alacak ve bu ikisini toplayıp tam sayı olarak çıktı verecek programı yaz.
float a,b;
printf("1. Degeri gir;");
scanf("%f",&a);
printf("2. Degeri gir;");
scanf("%f",&b);

int c=a+b;
printf("int c ile %d\n",c);
printf("%d\n",a+b);
printf("%d\n",(int)(a+b));
printf("%d\n",(int)a+b);*/
/*2. uygulamayı fonk olarak yaz*/
/*Dairenin çevresiyle alanını bulan fonk yaz.
int BenimYariCap;
printf("Yari Cap Giriniz;");
scanf("%d",&BenimYariCap);
daireCevreVeAlan(BenimYariCap);
}
*/
#include "stdio.h"

void daireCevreVeAlan(int yariCap);
void IkirealsayiyiToplaIntYaz(float a,float b);
int main(){


return 0;
}
void daireCevreVeAlan(int yariCap){
float pi=3.14;
float cevre= pi*yariCap*2;
float alan= pi*yariCap*yariCap;
printf("Cevre %.3f br\n",cevre);
printf("Alan %.3f br^2",alan);

}
void IkirealsayiyiToplaIntYaz(float a,float b){
printf("1. Degeri gir;");
scanf("%f",&a);
printf("2. Degeri gir;");
scanf("%f",&b);

int c=a+b;
printf("int c ile %d\n",c);
printf("%d\n",a+b);
printf("%d\n",(int)(a+b));
printf("%d\n",(int)a+b);
  
}
