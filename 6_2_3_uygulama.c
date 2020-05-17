/**<
*6_2_3_uygulama.c
*Bu program C dilinde: 2019 Tübitak Bilgisayar Olimpiyatlarında
*sorulan switch case sorusunu çözdüğümüz sorudur.
*@authr Neşet Aydın
17.05.2020
*Bu Program uygulama 6.2.3 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //
*/
/*Soru: Programın çıktısı ne olur?*/
#include <stdio.h>


int main(){
int a=3,b=2,c=1;
switch (b){
case 1:
    a--;
    c--;
case 2:
    a++;
    b++;
    break;
case 0:
    a=c*2;
    b=1;
    break;
default:
    b++;
}
printf("%d %d %d\n",a,b,c);



    return 0;
}
/*Cevap: Çıktı 2 1 1 dir. Çünkü case'ler break'le kırılmamıştır.*/
