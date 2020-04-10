/**<
*atamaOperatorleri.c
*Bu program C dilinde atama operatörlerini
*anlattığımız derste yazılan kodların son halidir.
*@authr Neşet Aydın
*10.04.2020
*Bu Program ders 5.3.4 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //link
*/
#include <stdio.h>
/*
=   Sadece atama yapar örneğin int a=10;

Aşağıda ki operatörler ise;
degisken1= degisken1 operatör degisken2 yerine kısaltma olarak
degisken1 operatör=degisken2 olarak kullanılır
+=  kendisi ve diğer bir değeri toplayarak atama yapar örneğin;
int a=10;
a+=15;  //a 25 olur
-=  kendisinden diğer bir değeri çıkararak atama yapar örneğin;
int b=10;
b-=5;   //b 5 olur
*=  kendisi ve diğer bir değeri çarparak atama yapar örneğin;
int c=10;
c*=3; //c 30 olur
/=  kendisine diğer bir değeri bölerek atama yapar örneğin;
int d=10;
d/=2; //d 5 olur
%=  kendisine diğer bir değeri bölerek kalanı atama yapar örneğin;
int e=10;
e/=7; //e 3 olur
<<= bit düzeyinde sola atama yapar örneğin;
int f=10;
f<<=2; //f 40 olur
>>= bit düzeyinde sağa atama yapar örneğin;
int g=40;
g>>=2; //g 10 olur
&=  bit düzeyinde mantıksal çarpma(ve) işlemini ve atama yapar örneğin;
int h=10;
h&=2; //h 2 olur
|=  bit düzeyinde mantıksal toplama(veya) işlemini ve atama yapar örneğin;
int i=1;
i|=8; //i 9 olur
^=  bit düzeyinde ya da işlemini ve atama yapar örneğin;
int j=11;
j^=8; //j 3 olur
*/
int main()
{
    int a;
    scanf("%d",&a);

    printf("Girdiniz deger; %d\n",a);

    a+=12;
        printf("Yeni a (+=) degeri; %d\n",a);
    a-=4;
        printf("Yeni a (-=) degeri; %d\n",a);
    a*=3;
        printf("Yeni a (*=) degeri; %d\n",a);
    a/=7;
        printf("Yeni a (/=) degeri; %d\n",a);
    a%=5;
        printf("Yeni a (%%=) degeri; %d\n",a);
    int b=10;
    printf("b degeri; %d\n",b);
    b<<=2;
        printf("Yeni b (<<=) degeri; %d\n",b);
    b>>=3;
        printf("Yeni b (>>=) degeri; %d\n",b);
    b&=4;
        printf("Yeni b (&=) degeri; %d\n",b);
    b|=15;
        printf("Yeni b (|=) degeri; %d\n",b);
    b^=29;
    printf("Yeni b (^=) degeri; %d\n",b);


    return 0;
}
