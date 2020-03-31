/**<
*depolamaSiniflari.c
*Bu program C dilinde auto ve static depolama sınıflarını
*anlattığımız derste yazılan kodların son halidir.
*@authr Neşet Aydın
*31.03.2020
*Bu Program ders 5.1.9 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //link
*/
#include "stdio.h"
int test1(){
static int a=0;
    printf("%test1 adress %d\n",&a);
    printf("%test1 deger %d\n",a);
a++;
return a;
}
int test2(){
auto int a=0;
    printf("%test2 adress %d\n",&a);
    printf("%test2 deger %d\n",a);
a++;
return a;
}
int test3(){
  int a=0;
    printf("%test3 adress %d\n",&a);
    printf("%test3 deger %d\n",a);
a++;
return a;
}
int main()
{

    return 0;
}
