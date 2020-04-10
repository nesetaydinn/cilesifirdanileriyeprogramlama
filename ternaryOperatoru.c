/**<
*ternaryOperatoru.c
*Bu program C dilinde ternary(karşılaştırma) operatörünü
*anlattığımız derste yazılan kodların son halidir.
*@authr Neşet Aydın
*10.04.2020
*Bu Program ders 5.3.5 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/1uu-DoegBHk
*/
#include <stdio.h>


/*
Karşılaştırma(Mukayese) Operatör veya İngilizce literatürdeki adıyla Ternary Operator;
koşul ifadesi ? sonuç1 : sonuç2;
Burada ki sonuçlar; duruma göre iki sonuçtan birinin değer ataması için,
duruma göre iki sonuçtan birindeki işlemi yapmak için,
duruma göre iki sonuçtan birindeki fonksiyonu çağırmak için kullanılır.

*/
int main()
{   int a,b;

    //Birinci Durum
    scanf("%d",&a);
    //b = (a>=0) ? 1:0;
    //printf("%d\n",b);
    //İkinci Durum
    //printf("%d\n",a);
    //(a>=0) ? a++:a--;
    //printf("%d\n",a);
    //Üçüncü Durum
    (a<=20 || a>=65) ? printf("Sana Sokaga Cikma Yasagi Var Evde KAL!!!") : printf("Sana Yasak Yok Ama EVDE KAL!!!");
    return 0;
}
