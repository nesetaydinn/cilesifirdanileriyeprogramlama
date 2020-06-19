/**<
*6_10_uygulama.c
*Bu program C dilinde: Bir Uygulamaya veya portala giriş simülasyonudur.
*Mobil banka uygulamasını simüle eder ve içerisinde ki sistemeGiris fonksiyonu
*sisteme giriş için kullanılır. islemler fonksiyonu menüyü temsil eder ve sifreYenileme fonksiyonu 
*en son 3 şifreyle aynı olmayan 6 basamaklı bir şifreyi kaydeder.
*@authr Neşet Aydın
19.06.2020
*Bu Program uygulama 6.9 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: https://youtu.be/PtkJ1s3UG0U
*/
#include <stdio.h>
#include <stdlib.h>
int sifre1,sifre2,mevcutSifre,yeniSifre,kullaniciId,girisSifre,girisId,anahtar,islem;
char sorgu;

kullaniciId=123456789;
sifre1=123456;
sifre2=234567;
mevcutSifre=345678;

void sifreYenileme(){
printf("Mevcut sifrenizi yenilemek istediginize eminmisiniz; [e / h]");
sorgu=getch();
if('e' == sorgu || 'E' == sorgu){
    sifreYenile:
    printf("Yeni Sifrenizi Giriniz;");
    scanf("%d", &yeniSifre);

    if(yeniSifre >= 100000 && yeniSifre <= 999999){
    if(sifre1 != yeniSifre && sifre2 != yeniSifre && mevcutSifre != yeniSifre) {

        sifre1=sifre2;
        sifre2=mevcutSifre;
        mevcutSifre=yeniSifre;
        yeniSifre =0;
    }else {
    printf("Yeni sifreniz son 3 sifrenizle ayni olmamalidir... \n");
    goto sifreYenile;
    }
    }
     else {
    printf("6 basamakli bir sifre giriniz...\n");
    goto sifreYenile;
    }
}
}
void islemler(){
    islemAl:
printf("Islem Secimi Yapiniz;\n");
printf("Sifreyi yenileme [1]");
scanf("%d",&islem);
switch (islem) {
case 1:
    sifreYenileme();
    printf("Yeni Sifreniz; %d", mevcutSifre);


    break;
default:
    printf("Hatali Islem Secimi Yaptiniz...\n");
    goto islemAl;

    break;


}


}
void sistemeGiris(){
kullaniciGiris:
printf("Lutfen Id'nizi giriniz;");
scanf("%d",&girisId);
printf("Lutfen Sifre'nizi giriniz;");
scanf("%d",&girisSifre);
 if(girisId >= 100000000 && girisId <= 999999999 && girisSifre >= 100000 && girisSifre <= 999999){
    if(kullaniciId == girisId){
        anahtar=1;
    }else { printf("Hatali bir Id girdiniz...\n");
 goto kullaniciGiris;}
 if(mevcutSifre == girisSifre && 1== anahtar ){
       printf("Sisteme Giris Yaptiniz...\n");
       islemler();
        anahtar=0;
    }else { printf("Hatali bir Sifre girdiniz...\n");
 goto kullaniciGiris;}

 } else {
 printf("Eksik bir Id veya sifre girdiniz...\n");
 goto kullaniciGiris;
 }

}


int main()
{
sistemeGiris();


    return 0;
}
