/**<
*6_1_1_if_else.c
*Bu program C dilinde: Program denetim deyimlerinden if ile else 
*kullanımını anlattığımız
*derste yazılan programdır.
*@authr Neşet Aydın
15.05.2020
*Bu Program ders 6.1.1 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/eJ7jGDun6I0
*/
#include <stdio.h>

/*if(kosul) islem;
else islem2;

if(kosul) {

    islemler
}
else {

    islemler2
}*/

int main()
{ char karakter;
printf("Bir karakter girin;");
scanf("%c",&karakter);
    if('a'==karakter || 'A'==karakter) {

        printf("Dogru Bildiniz\n");
        printf("test;");
    }
    else {

        printf("yanlis bildiniz\n");
        printf("test;");
    }

    return 0;
}

