/**<
*6_1_4_if_if_if_else_if.c
*Bu program C dilinde: Program denetiminde en çok kullanılan karşılaştırma deyimi if-else yapısında; 
*if-if else-if farkının 
*mantığını anlattığımız
*derste yazılan programdır.
*@authr Neşet Aydın
16.05.2020
*Bu Program ders 6.1.4 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/xyilYwq0XG8
*/

#include <stdio.h>


int main()
{
if (1) printf("else if (if 1)\n");
else if (1) printf("else if (else if 1)\n");
else if (1) printf("else if (else if 2)\n");
else printf("else if (else )\n");

if (1) printf(" if (if 1)\n");
if (1) printf(" if ( if 2)\n");
if (0) printf(" if ( if 3)\n");
else printf("if (else )");


    return 0;
}
