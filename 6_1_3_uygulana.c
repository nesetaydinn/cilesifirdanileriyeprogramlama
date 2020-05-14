/**<
*6_1_3_uygulana.c
*Bu program C dilinde: Öğrencinin vize ve final notlarını alarak
*ortalamasını hesaplar ve ortalamaya göre
*kaldığını, şartlı geçtiğini veya doğrudan geçtiğini
*ortalaması ile birlikte konsola bastırır.
*@authr Neşet Aydın
15.05.2020
*Bu Program uygulama 6.1.3 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/Uyv84e_SzJc
*/
#include <stdio.h>

/*Ortalamayı vize %20 Final %80 etkiler
Eğer Ort. 60 tan küçükse kaldı
60 ile 69 arasındaysa şartlı geçti
70 veya daha fazla ise geçti.*/
int main()
{
    double vize, finall,ortalama;
    printf("Vizeyi giriniz;");
    scanf("%lf",&vize);
    printf("Finali giriniz;");
    scanf("%lf",&finall);
    if(vize >=0 && vize<=100 &&finall >=0 && finall<=100){
         ortalama= (vize*20/100)+(finall*80/100);
    if(ortalama<60) printf("Ortalama %lf ile Kaldi",ortalama);
    else if(ortalama>=60 && ortalama<=69) printf("Ortalama %lf ile Sartli Gecti",ortalama);
    else printf("Ortalama %lf ile Dogrudan Gecti",ortalama);
    }
    else printf("Yanlis degerler girdiniz...");

    return 0;
}


