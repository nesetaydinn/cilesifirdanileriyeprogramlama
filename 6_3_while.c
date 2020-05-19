  
/**<
*6_3_while.c
*Bu program C dilinde: Döngülere giriş yapıp, while döngüsü
*kullanımını anlattığımız
*derste yazılan programdır.
*@authr Neşet Aydın
19.05.2020
*Bu Program ders 6.3 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/nRNdISvIV1M
*/
/*
Söz dizimi;
while(kosul) islem;
while(kosul){
*
İşlemler
*
}

Nasıl çalışır koşul sağlandığı sürece işlem bloğuna girerek, işlemleri tekrar eder.
*/
#include <stdio.h>

int main()
{
    int kosul=0;
printf("%d",kosul);
while(kosul<100){

    kosul+=10;
    printf("test\n");
}

    return 0;
}
