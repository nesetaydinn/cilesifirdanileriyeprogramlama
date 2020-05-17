/**<
*6_2_4_uygulama.c
*Bu program C dilinde: Switch - Case ile birlikte basit bir 
*Hesap makinesi yaptığımız programda yazılan programın
*son halidir.
*@authr Neşet Aydın
17.05.2020
*Bu Program uygulama 6.2.4 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/X8tm1K8vHsc
*/
#include <stdio.h>
double ilkD,ikinciD;
int islem;
/*Fonksiyonlar ile birlikte switch case 'i kullanarak basit bir hesap makinesi yapınız
toplama, çıkarma, çarpma ve bölme işlemleri olsun. */

void islemleriGoster(){

printf("[1] Toplama islemi\n");
printf("[2] Cikarma islemi\n");
printf("[3] Carpma islemi\n");
printf("[4] Bolme islemi\n");
printf("[5] Kare Alma islemi\n");
printf("Lutfen yapmak istediginiz Islemi Seciniz;");

}
int islemSecici(){
scanf("%d",&islem);
}
void degerAlici(){
if(5==islem){printf("Birinci Degeri Giriniz;");
scanf("%lf",&ilkD);}
else{
    printf("Birinci Degeri Giriniz;");
scanf("%lf",&ilkD);

printf("Ikinci Degeri Giriniz;");
scanf("%lf",&ikinciD);
}

}
double hesaplayici(double ilkDeger,double ikinciDeger,int islem ){
double sonuc=0;
printf("Sectiginiz Islem; [%d]\n",islem);
switch (islem){
    case 1:
    sonuc=ilkDeger+ikinciDeger;
    break;
    case 2:
    sonuc=ilkDeger-ikinciDeger;
    break;
    case 3:
    sonuc=ilkDeger*ikinciDeger;
    break;
    case 4:
    sonuc=ilkDeger/ikinciDeger;
    break;
    case 5:
    sonuc=ilkDeger*ilkDeger;
    break;
    default:
        printf("Yanlis Islem Sectiniz...\n");
    break;
return sonuc;

}
return sonuc;

}
void sonucGoster(double sonuc){
    printf("İslemin Sonucu = %lf",sonuc);
}
int main(){
islemleriGoster();
islemSecici();
degerAlici();
sonucGoster(hesaplayici(ilkD,ikinciD,islem));
    return 0;
}
