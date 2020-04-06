/**<
*bitwiseOperatorler.c
*Bu program C dilinde bitsel düzeyde işlem yapan(bitwise) operatörlerini
*anlattığımız derste yazılan kodların son halidir.
*@authr Neşet Aydın
*7.04.2020
*Bu Program ders 5.3.3 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/9nQ4_QatDzk
*/
#include "stdio.h"

/*
& bitsel ve operatörü (shift 6)
| bitsel veya operatörü (alt gr <)
^ bitsel yada operatörü (shift 3 )
~ bitsel değil (tümleyen) operatörü (alt gr ü )
<< bitsel sola kaydırma(öteleme) operatörü (<)
>> bitsel sağa kaydırma(öteleme) operatörü (shift <)
*/

int main(){
unsigned char d1,d2,d3,d4,d5,d6,d7,d8;
d1=15;
d2=25;
d3=d1&d2;
d4=d1|d2;
d5=d1^d2;
d6=~d2;
printf("d1 %d\n",d1);
printf("d2 %d\n",d2);
printf("d3 %d\n",d3);
printf("d4 %d\n",d4);
printf("d5 %d\n",d5);
printf("d6 %d\n",d6);

d7=d2<<2;
d8=d2>>2;
printf("d7 %d\n",d7);
printf("d8 %d\n",d8);




return 0;
}
