/**<
*6_8_1_uygulama.c
*Bu program C dilinde: Klavyeden aldığımız 0 ile 1000 arasında ki sayıları 
*rakamlardan(1,2,3 gibi) yazıya(bir,iki,üç gibi) çeviren programdır.
*@authr Neşet Aydın
27.05.2020
*Bu Program uygulama 6.8.1 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/ml9pCXNtjq0
*/
#include <stdio.h>

/*
6.8.1 Klavyeden girilen bir tamsayıyı (0-1000 arasında siz aralığı büyütebilirsiniz) yazı ile konsola bastıran programı yazınız.
*/

void RakamYaziCeviri(int sayi){
switch(sayi){
case 0: printf("Sifir");
break;
case 1: printf("Bir");
break;
case 2: printf("Iki");
break;
case 3: printf("Uc");
break;
case 4: printf("Dort");
break;
case 5: printf("Bes");
break;
case 6: printf("Alti");
break;
case 7: printf("Yedi");
break;
case 8: printf("Sekiz");
break;
case 9: printf("Dokuz");
break;
case 10: printf("On");
break;
case 20: printf("Yirmi");
break;
case 30: printf("Otuz");
break;
case 40: printf("Kirk");
break;
case 50: printf("Elli");
break;
case 60: printf("Altmis");
break;
case 70: printf("Yetmis");
break;
case 80: printf("Seksen");
break;
case 90: printf("Doksan");
break;
case 100: printf("Yuz");
break;
}



}

void ekranaBastir(int sayi){
if(sayi>0 && sayi<1000){
if(sayi>=100){
    if(sayi<=199) RakamYaziCeviri(100);
else{
    RakamYaziCeviri(sayi/100); printf(" ");
    RakamYaziCeviri(100);
}


}
printf(" ");
if(sayi>=10) {
    if((((sayi%100)/10)*10)==0);
    else
    RakamYaziCeviri(((sayi%100)/10)*10);
}
printf(" ");
if(((sayi%100)%10)==0);
else
RakamYaziCeviri((sayi%100)%10);


}
else printf("Deger Araliginda Sayi Girmediniz...\n");

}
int main(){
int sayi;

while(1) {
    printf("Sayiyi giriniz(0-1000)\n(Eger Cikmak isterseniz -1 giriniz...)");
    scanf("%d",&sayi);
    if(sayi==-1) break;
    ekranaBastir(sayi);
    printf("\n");
}
    return 0;
}
