/**<
*6_8_3_uygulama.c
*Bu program C dilinde: Girdiğimiz iki tane tam sayının ortak
*bölenlerinin en büyüğünü hesaplar.
*@authr Neşet Aydın
28.05.2020
*Bu Program uygulama 6.8.3 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/-7zGMrBpSTU
*/
#include <stdio.h>
/**
6.8.3 Klavyeden girilen 2 tam sayının ebob'unu bulan ve konsola bastıran programı yazınız.
*/

int main()
{

    int a,b,ebob;
    printf("ilk degeri giriniz;");
    scanf("%d",&a);
    printf("ikinci degeri giriniz;");
    scanf("%d",&b);
    for(int sayac=1;sayac<=a && sayac<=b; sayac++){
        if(a%sayac==0 && b%sayac==0) ebob =sayac;
    }
    printf("\nebob=%d",ebob);
    return 0;
}
