/**<
*sizeofOperatoru.c
*Bu program C dilinde kullanılan sizeof Operatörü
*ile ilgili basit uygulamaları vardır.
*@authr Neşet Aydın
*21.04.2020
*Bu Program ders 5.3.7 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //
*/
#include "stdio.h"

/**
sizeof ___
sizeof (___)

İlk kullanımda Değişken adı, dizi,yapı(structure) yazılabilir.
İkinci kullanımda temel tip adı(int, float vb.), degişken adı, yapı, dizi, işaretçi, matematiksel bağıntı yazılabilir.



*/
int main(){
int d1,d2,d3, d[5];
d2=sizeof d;
d3=sizeof (d1);
printf("d2=%d, d3=%d",d2,d3);

return 0;
}
