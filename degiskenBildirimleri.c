/**<
*degiskenBildirimleri.c
*Bu program C dilinde Genel ve Yerel Değişkenlerin nasıl tanımlandığını
*anlattığımız derste yazılan kodların son halidir.
*@authr Neşet Aydın
*30.03.2020
*Bu Program ders 5.1.8 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/vS217VLBIu4
*/
#include "stdio.h"
int a, b;
void fonk1(){
printf("1 %d,%d\n",a,b);
printf("1 yer %d,%d\n",&a,&b);
int a, b;
printf("1 %d,%d\n",a,b);
printf("1 yer %d,%d\n",&a,&b);

}
void fonk2(){
printf("2 %d,%d\n",a,b);
printf("2 yer %d,%d\n",&a,&b);
int a, b;
printf("2 %d,%d\n",a,b);
printf("2 yer %d,%d\n",&a,&b);
}

int main(){
fonk1();
fonk2();

printf("main %d,%d\n",a,b);
printf("main yer %d,%d\n",&a,&b);
int a, b;
printf("main %d,%d\n",a,b);
printf("main yer %d,%d\n",&a,&b);
return 0;
}
