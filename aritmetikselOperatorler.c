/**<
*aritmetikselOperatorler.c
*Bu program C dilinde aritmetiksel operatörleri 
*anlattığımız derste yazılan kodların son halidir.
*@authr Neşet Aydın
*2.04.2020
*Bu Program ders 5.3 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/DSNRxhublYo
*/

#include "stdio.h"

/*Aritmetiksel operatörler;
+ toplamayı
- çıkarmayı
* çarmayı
/ bölme
% mod almayı
-- bir azaltmayı
++ bir arttırmayı

*/


int main(){

int a= 25;
int b= 15;
printf("toplama %d\n",a+b);
printf("cikarma %d\n",a-b);
printf("carpma %d\n",a*b);
printf("bolme %d\n",a/b);
printf("mod alma %d\n",a%b);

printf("a=%d\n",a);
a=a+1;
printf("a=%d\n",a);
a++;
printf("a=%d\n",a);
++a;
printf("a=%d\n",a);

b=0;
printf("a=%d, b=%d\n",a,b);
b=++a;
printf("a=%d, b=%d\n",a,b);
b=a++;
printf("a=%d, b=%d\n",a,b);


return 0; }
