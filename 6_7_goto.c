  
/**<
*6_7_goto.c
*Bu program C dilinde: goto değimini anlattığımız
*ders videosunda yazdığımız kodlardır.
*@authr Neşet Aydın
27.05.2020
*Bu Program ders 6.7 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //
*/
#include <stdio.h>

int main()
{
/*etiket:

printf("1\n");
printf("2\n");
goto etiket;
printf("3\n");
printf("4\n");

printf("5\n");
*/
printf("program basladi...\n");
int a;
nokta1:
    printf("A degeri girin;");
    scanf("%d",&a);
    nokta2:
    printf("A degeri alindi...\nA=%d\n",a);
    if(3==a) goto nokta2;
    if(5==a) goto nokta1;
    printf("Program bitti");
    return 0;
}
