/**<
*6_8_5_uygulama.c
*Bu program C dilinde: Sırası ile faktöriyel hesaplayan,
*permütasyon hesaplayan, kombinasyon hesaplayan fonksiyonları
*ile birlikte girilen 2 sayının faktöriyel,permütasyon ve
*kombinasyonunu hesaplar
*@authr Neşet Aydın
02.06.2020
*Bu Program uygulama 6.8.4 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: 
Kısım 1; //https://youtu.be/QV8EESp9jfs
Kısım 2; //https://youtu.be/KlDqayp0088
Kısım 3; //https://youtu.be/Oxi3bA-1vRc
*/

#include <stdio.h>

/**
6.8.5.1 Klavyeden girilen bir tamsayının faktöriyelini hesaplayan fonksiyonu yazınız.
*/

int faktoriyelAlma(int sayi){
unsigned int sonuc= 1;
for(int sayac=sayi;sayac>=1;sayac--) sonuc*=sayac;
return sonuc;
}

/**
6.8.5.2 Klavyeden girilen bir tamsayının permütasyonunu hesaplayan fonksiyonu yazınız.
*/

int permutasyonAlma(int sayi1,int sayi2){
int sonuc=1;
sonuc=faktoriyelAlma(sayi1)/faktoriyelAlma(sayi1-sayi2);
return sonuc;
}

/**
6.8.5.3 Klavyeden girilen bir tamsayının kombinasyonunu hesaplayan fonksiyonu yazınız.
*/

int kombinasyonAlma(int sayi1,int sayi2){
int sonuc=1;
sonuc=permutasyonAlma(sayi1,sayi2)/faktoriyelAlma(sayi2);
return sonuc;
}

int main()
{
int test,test1;
printf("Faktoriyelini almak istediginiz degeri giriniz=");
scanf("%d",&test);
printf("Permutasyon icin 2 degeri giriniz almak istediginiz degeri giriniz=");
scanf("%d",&test1);
printf("Girdiginiz deger %d Faktoriyeli %d\n",test,faktoriyelAlma(test));
printf("Girdiginiz deger1 %d ve deger2 %d Permutasyonu %d\n",test,test1,permutasyonAlma(test,test1));
printf("Girdiginiz deger1 %d ve deger2 %d Kombinasyonu %d\n",test,test1,kombinasyonAlma(test,test1));

    return 0;
}
