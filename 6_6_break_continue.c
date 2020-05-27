/**<
*6_6_break_continue.c
*Bu program C dilinde: break ve continue değimlerini anlattığımız
*ders videosunda yazdığımız kodlardır.
*@authr Neşet Aydın
27.05.2020
*Bu Program ders 6.6 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/vTvRqNpLp3M
*/
#include <stdio.h>

int main(){
int a,b,c;
a=0;
b=50;
c=100;

while(1){
printf("Dongu basladi\n");
a++;
b--;
c-=5;
printf("Islemler tamamlandi\n");
//if(c==50) break;
if(c!=50){
printf("a=%d, b=%d, c=%d\n",a,b,c);
printf("Islemler Gosterildi\n");
printf("Dongu bitti\n");
}
}
printf("Dongu kirildi");
    return 0;
}
