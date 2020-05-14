/**<
*6_1_if_giris.c
*Bu program C dilinde: Program denetim deyimlerinden if'e giriş yaptığımız
*derste yazılan programdır.
*@authr Neşet Aydın
15.05.2020
*Bu Program ders 6.1 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/lluQJNxGOfQ
*/
#include <stdio.h>
/*
if(kosul) islem;
    if(kosul){

        işlem1;
        işlem2;
    }

*/
int main()
{
    int sayi1, sayi2;
    printf("Sayi 1;");
    scanf("%d",&sayi1);
    printf("Sayi 2;");
    scanf("%d",&sayi2);
if (sayi1<sayi2) printf("Sayi1 sayi2 den kucuk ");
if (sayi1>sayi2) printf("Sayi1 sayi2 den buyuk ");
    return 0;
}
