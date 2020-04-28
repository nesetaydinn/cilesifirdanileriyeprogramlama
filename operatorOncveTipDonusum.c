/**<
*operatorOncveTipDonusum.c
*Bu program C dilinde aritmetik operatör önceliklerini ve tip dönüşümleri
*ile ilgili notları ve basit uygulamaları içerir.
*@authr Neşet Aydın
*28.04.2020
*Bu Program ders 5.3.8 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //
*/
#include "stdio.h"
#include "math.h"
/**
Operatör Öncelikleri;
* ve / operatörleri öncelikli,
Tip Dönüşümleri;
Bir birinden farklı tipteki değişkenlerde sonucun hangi tipte tutulacağı belirlenir,
Biri long double ise diğerleri de long double,
Biri double ise diğerleri de double,
Biri float ise diğerleri de float,
Biri uint ise diğerleri de uint,
Biri u long int ise diğerleri de u long int,
Biri long int ise diğerleri de long int, gibi devam eder.

Farklı tipte ki bir değeri istediğimiz tipe çevirmek için;
(istediğimiz tip) Bağıntı(veya değişken)

*/
int main()
{
    int x1,x2,a,b,c,d;
    a=1; b=4; c=3;
    d=b*b-4*a*c;
    x1=(-b+sqrt(d))/2*a;
    x2=(-b-sqrt(d))/2*a;
    printf("Delta =%d, \nx1=%d, \nx2=%d",d,x1,x2);
    return 0;
}
