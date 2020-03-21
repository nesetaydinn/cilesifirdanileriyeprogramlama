/**<
*charDegiskenTipi.c
*Bu program C dilinde kullanılan Char Veri Tiplerinin
*Alt ve Üst Sınırlarını Konsola Bastırır.
*@authr Neşet Aydın
*21.03.2020
*Bu Program ders 5.1.2 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://www.youtube.com/watch?v=_CAbZNtR998
*/

#include "stdio.h"
char test1(){

return -126;}
unsigned char test2(){
return -126;}

int main(){
printf("Char= %d bayt, %d bit tir.",sizeof(char),sizeof(char)*8);
printf("\n\n");
char veri1= 'A';
unsigned char veri2=65;
printf("%c,%d\n",veri1,veri1);
printf("%c,%d\n",veri2,veri2);
printf("%c,%d\n",veri1+veri2,veri1+veri2);
printf("%c,%d\n",-126,-126);
printf("%c,%d\n",test1(),test1());
printf("%c,%d\n",test2(),test2());
char veri3= 2254;
printf("%c,%d\n",veri3,veri3);
unsigned char veri4= 2254;
printf("%c,%d\n",veri4,veri4);
printf("");
return 0;
}
