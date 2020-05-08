/**<
*5_4_6_uygulama.c
*Bu program C dilinde: Parametre olarak tam bir sayı alan 
*ve fonksiyonun içerisinde ki bir statik değerle çarparak,
*sonuç değerini döndüren ve bunun auto bir değişkenden farkını,
*gösteren 2. bir fonk ile kıyaslamasını gösterdiğimiz
*iki fonksiyonu ve uygulamasını içerir.
*@authr Neşet Aydın
8.05.2020
*Bu Program uygulama 5.4.1 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/s61XbkBYf6U
*/

#include "stdio.h"
#include "math.h"

/*fonk statik tam sayı değişkem olsun, int bir olsun, aldığımız değerleri statik sayıyla çarp return*/

int fonk(int al){
static int test=1;
test*=al;
return test;


}

int fonk2(int al){
int test=1;
test*=al;
return test;


}

int main(){
    printf("Static;\n");
printf("%d\n",fonk(2));
printf("%d\n",fonk(2));
printf("%d\n",fonk(2));
printf("%d\n",fonk(2));
printf("%d\n",fonk(2));
  printf("auto;\n");
printf("%d\n",fonk2(2));
printf("%d\n",fonk2(2));
printf("%d\n",fonk2(2));
printf("%d\n",fonk2(2));
printf("%d\n",fonk2(2));



return 0;
}

