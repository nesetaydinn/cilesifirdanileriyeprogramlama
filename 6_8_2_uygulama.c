  
/**<
*6_8_2_uygulama.c
*Bu program C dilinde: Klavyeden aldığımız n kadar elemanın 
*aritmetik ortalamasını hesaplar.
*@authr Neşet Aydın
28.05.2020
*Bu Program uygulama 6.8.2 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //
*/
#include <stdio.h>

/*
6.8.2 Klavyeden girilen n tamsayının aritmetik ortalamasını hesaplayan ve konsola bastıran programı yazınız.
*/
int aritmetikOrtalamaHesaplayici(int n){
if(!(n<=0)){
  int sonuc=0,girdi;
    for(int sayac=1;sayac<=n;sayac++){
        printf("%d. Elemani giriniz;",sayac);
        scanf("%d",&girdi);
        sonuc+=girdi;

    }
    sonuc/=n;
   return sonuc;
}
else return -1;
}
int main()
{   int girdiSayisi;
printf("Kac elemanýn aritmetik Ortalamasini alacaksiniz?");
scanf("%d",&girdiSayisi);
printf("Sonuc= %d",aritmetikOrtalamaHesaplayici(girdiSayisi));
    return 0;
}
