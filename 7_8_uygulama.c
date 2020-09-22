/**<
*7_8_uygulama.c
*Bu program C dilinde: Nem kontrol simülasyonunu taklit edebileceğimiz bir programdır.
*@authr Neşet Aydın
*22.09.2020
*Bu Program uygulama 7.8 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: 
Kısım 0; https://youtu.be/kG2gAd0WXoQ
Kısım 1; https://youtu.be/JkB3now8H_k
Kısım 2; https://youtu.be/vrVU41Irzag
Kısım 3; https://youtu.be/nOsbJoTYNd8
Kısım 4; https://youtu.be/64wGSpSntww
Kısım 5; https://youtu.be/Y4_vADDE4i0
*/

/**
7.8 Bu örnek uygulamada;
+ Rand fonksiyonunu kullanarak 12 bitlik değerler üretilecek,
bu değerler 4 adet(siz isteğe göre değiştirebilirsiniz) saksıda ki toprak nem sensörünü temsil edecek.
+ Elde edilen bu değerleri 0-100 arasında döndürecek bir fonksiyon yazılacak.
(Bu fonksiyonu yazarken dikkat etmeniz gereken sadece 12 bitlik bir girdi ve 0-100 arası çıktı olmamasıdır.)
+ 0-100 arası elde edilen bu değerler başka bir fonksiyon tarafından alınıp
saksı numaraları ile birlikte konsola bastırılacak. Örneğin 2. saksı nem oranı=%40 gibi.
+ Ayrıca elde edilen değerlere göre;
eğer nem seviyesi %40'ın altına düşerse %75'in üzerine çıkana kadar oluşturacağınız bir fonksiyonla
su veriliyormuş izlenimi verilecek ve bu esnada okuduğunuz 12 bitlik değer (belirlediğiniz miktarda) arttırılacak.
+Ve tüm saksılarda okumuş olduğunuz 12 bitlik değeri her ekrana bastırmadan önce (belirlediğiniz kadar=10) azaltacaksınız.
+ konsolda yazıların hızlı bir şekilde devam etmemesi için bir döngü ile bekleme fonksiyonu yazın.
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


void beklemeMs(int msaniye);
void beklemeSn(int saniye);
double oranla(double gd,double gmin,double gmax,double cmin,double cmax);
int randomNem();
void nemAzaltma(int adet,...);
void nemArttirma(int adet,...);
void nemDurumlariniBastir(int adet,...);
int main()
{   int nSen1,nSen2,nSen3,nSen4;
    nSen1=randomNem();
    nSen2=randomNem();
    nSen3=randomNem();
    nSen4=randomNem();
    while(1){

nemAzaltma(4,&nSen1,&nSen2,&nSen3,&nSen4);
nemArttirma(4,&nSen1,&nSen2,&nSen3,&nSen4);
nemDurumlariniBastir(4,&nSen1,&nSen2,&nSen3,&nSen4);
beklemeMs(1000);

}
    return 0;
}
void beklemeMs(int msaniye){
for(int sayac1=0;sayac1<msaniye;sayac1++)
for(int sayac2=0;sayac2<500000;sayac2++);

}
void beklemeSn(int saniye){
for(int sayac1=0;sayac1<saniye;sayac1++)
for(int sayac2=0;sayac2<500000;sayac2++);

}
double oranla(double gd,double gmin,double gmax,double cmin,double cmax){
return (gd-gmin)*(cmax-cmin) / (gmax-gmin) + cmin;
}
int randomNem(){

return rand()%4096;
}
void nemAzaltma(int adet,...){
va_list sensorler;
int *sensor;
va_start(sensorler,adet);
for(int sayac=0;sayac<adet;sayac++){
    sensor=va_arg(sensorler,int);
    if(*sensor>=0 && *sensor<10 )*sensor=0;
    else *sensor-=10;
}
va_end(sensorler);
}
void nemArttirma(int adet,...){
va_list sensorler;
int *sensor;
double sensorYuzdelikDeger;
va_start(sensorler,adet);
for(int sayac=0;sayac<adet;sayac++){
    sensor=va_arg(sensorler,int);
    sensorYuzdelikDeger=oranla(*sensor,0,4095,0,100);
    if(sensorYuzdelikDeger<=40.0f)
    while (!(sensorYuzdelikDeger>=75.0f)){
    sensorYuzdelikDeger+=5;
    *sensor=(int)oranla(sensorYuzdelikDeger,0,100,0,4095);
    }
}
va_end(sensorler);
}
void nemDurumlariniBastir(int adet,...){
va_list sensorler;
int *sensor;
double sensorYuzdelikDeger;
va_start(sensorler,adet);
printf("Sensor Yuzdelik Degerler\n");
for(int sayac=0;sayac<adet;sayac++){
    sensor=va_arg(sensorler,int);
    sensorYuzdelikDeger=oranla(*sensor,0,4095,0,100);
    printf("%d.Sensor mevcut nem durumu=%% %d\n",sayac+1,(int)sensorYuzdelikDeger);

}

printf("\n\n\n");
va_end(sensorler);
}
