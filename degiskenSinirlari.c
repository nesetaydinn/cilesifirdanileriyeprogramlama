/**<
*degiskenSinirlari.c
*Bu program C dilinde kullanılan Değişken(Veri) Tiplerinin
*Alt ve Üst Sınırlarını Konsola Bastırır.
*@authr Neşet Aydın
*20.03.2020
*Bu Program ders 5.1.1 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: https://youtu.be/YSMRNm8b0YY 
*/

#include "stdio.h"
#include "limits.h" //Char ve İnt sınırlarına ulaşmak için
#include "float.h" //Float ve Double sınırlarına ulaşmak için
int main(){
printf("DE%c%c%cKENLER%CN TUTTU%cU YERLER:\n",166,152,158,152,166);
//Ascii'nin Türkçe karakterler için oluşturduğu tabloda ki değerleri kullanarak Türkçe karakter Kullanabilirsiniz.
//https://www.ascii-codes.com/cp857.html
printf("KARAKTERLER:\n\n");

printf("Unsigned char:\t\t byte= %d \tbit=%d \t char min =%d\t\t char max=%d\n",sizeof(unsigned char),sizeof(unsigned char)*8,0,UCHAR_MAX);
printf("char:\t\t\t byte= %d \tbit=%d \t char min =%d\t\t char max=%d\n",sizeof(char),sizeof(char)*8,CHAR_MIN,CHAR_MAX);
printf("Signed char:\t\t byte= %d \tbit=%d \t char min =%d\t\t char max=%d\n",sizeof(signed char),sizeof(signed char)*8,SCHAR_MIN,SCHAR_MAX);

printf("\nTAM SAYILAR:\n\n");

printf("unsigned int:\t\t byte= %d \tbit=%d \t int min =%u\t\t int max=%u\n", sizeof(unsigned int), sizeof(unsigned int)*8, (unsigned int) 0, UINT_MAX);
printf("int:\t\t\t byte= %d \tbit=%d \t int min =%d\t int max=%d\n", sizeof(int), sizeof(int)*8, INT_MIN, INT_MAX);
printf("unsigned short int:\t byte= %d \tbit=%d \t int min =%hu\t\t int max=%hu\n", sizeof(unsigned short int), sizeof(unsigned short int)*8, 0, USHRT_MAX);
printf("short int:\t\t byte= %d \tbit=%d \t int min =%hd\t int max=%hd\n\n", sizeof(short int), sizeof(short int)*8, SHRT_MIN, SHRT_MAX);

printf("unsigned long int:\t byte= %d \tbit=%d \t int min =%lu\t\t int max=%lu\n", sizeof(unsigned long int), sizeof(unsigned long int)*8, (unsigned long int) 0, ULONG_MAX);
printf("long int:\t\t byte= %d \tbit=%d \t int min =%ld\t int max=%ld\n", sizeof(long int), sizeof(long int)*8, LONG_MIN, LONG_MAX);
printf("unsigned long long int:\t byte= %d \tbit=%d \t int min =%llu\t\t int max=%llu\n", sizeof(unsigned long long int), sizeof(unsigned long long int)*8, (unsigned long long int) 0, ULLONG_MAX);
printf("long long int:\t\t byte= %d \tbit=%d \t int min =%lld\t int max=%lld\n\n", sizeof(long long int), sizeof(long long int)*8, LLONG_MIN, LLONG_MAX);

printf("\nONDALIKLI SAYILAR:\n\n");

printf("float:\t\t\t byte= %d \tbit=%d \t float min =%g\t float max=%g\n", sizeof(float), sizeof(float)*8, -FLT_MAX, FLT_MAX);
printf("double:\t\t\t byte= %d \tbit=%d \t double min =%lg\t double max=%lg\n", sizeof(double), sizeof(double)*8, -DBL_MAX, DBL_MAX);
printf("long double:\t\t byte= %d \tbit=%d \t double min =%Lg\t\t double max%Lg\n\n", sizeof(long double), sizeof(long double)*8, -LDBL_MAX, LDBL_MAX);
printf("GEL%c%cT%cREN:NE%cET AYDIN\n",152,158,152,158);
return 0;
}
