/**<
*floatDoubleDegiskenTipi.c
*Bu program C dilinde kullanılan float ve double Veri Tiplerinin
*bayt, bit ve aralık bilgisini konsola bastırır ve
*programda basit uygulamaları vardır.
*@authr Neşet Aydın
*27.03.2020
*Bu Program ders 5.1.4 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //linkgelecek
*/

#include "stdio.h"
#include "float.h"


int main(){
printf("float:\t\t\t byte= %d \tbit=%d \t float min =%g\t float max=%g\n", sizeof(float), sizeof(float)*8, -FLT_MIN, FLT_MAX);
printf("double:\t\t\t byte= %d \tbit=%d \t double min =%lg\t double max=%lg\n", sizeof(double), sizeof(double)*8, -DBL_MIN, DBL_MAX);
printf("long double:\t\t byte= %d \tbit=%d \t double min =%Lg\t\t double max%Lg\n\n", sizeof(long double), sizeof(long double)*8, -LDBL_MIN, LDBL_MAX);


printf("\n\n");
/*
f
lf
Lf

g
lg
Lg

e
*/
float degisken1=35.5;
double degisken2=35.5;
long double degisken3=35.5;




printf("f gosterimi \n" );
printf("float %f \n",degisken1 );
printf("double %lf \n",degisken2 );
printf("long double %Lf \n",degisken3 );

printf("g gosterimi \n" );
printf("float %g \n",degisken1 );
printf("double %lg \n",degisken2 );
printf("long double %Lg \n",degisken3 );

printf("e gosterimi \n" );
printf("float %e \n",degisken1 );
printf("double %le \n",degisken2 );
printf("long double %Le \n",degisken3 );
return 0;
}
