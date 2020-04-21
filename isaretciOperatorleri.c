  
/**<
*isaretciOperatorleri.c
*Bu program C dilinde kullanılan işaretçi Operatörleri 
*ile ilgili basit uygulamaları vardır.
*@authr Neşet Aydın
*21.04.2020
*Bu Program ders 5.3.6 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //link
*/
#include <stdio.h>

/*İşaretçi (Pointer) Operatörleri

* operatörü
İşaretçi bildirimi ve
işaretçi değişkenin işaret ettiği bellek gözüne erişmek için kullanılır.

& operatörü
Değişkenin önüne koyarak kullanılır
değişkenin değeri için değil, adresi ile ilgilenir.
*/


int main()
{
    int d1,d2,*p1;
    p1=&d1;
    d1=1453;

    printf("degisken adres %d\n",&d1);
    printf("degisken deger %d\n",d1);

    printf("pointer adres %d\n",&p1);
    printf("pointer tuttugu adres %d\n",p1);
    printf("pointer deger %d\n",*p1);

    *p1=1071;

     printf("degisken adres %d\n",&d1);
    printf("degisken deger %d\n",d1);

    printf("pointer adres %d\n",&p1);
    printf("pointer tuttugu adres %d\n",p1);
    printf("pointer deger %d\n",*p1);
    return 0;
}
