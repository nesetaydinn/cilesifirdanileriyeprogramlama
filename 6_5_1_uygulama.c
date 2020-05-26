/**<
*6_5_1_uygulama.c
*Bu program C dilinde: Fibonnacci dizisinde n. elemana kadar konsola bastırır.
*@authr Neşet Aydın
26.05.2020
*Bu Program uygulama 6.5.1 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/m408u6J08nY
*/
#include "stdio.h"

void fibonacciDizisi(int n){

if(0==n)printf("1. Eleman 0\n");
else if(1==n)printf("1. Eleman 0\n1\n");
else if(n>1){
int sonuc, fn_2=0,fn_1=1;
printf("1. Eleman %d\n2. Eleman %d\n",fn_2,fn_1);
for(int sayac=2;sayac<n;sayac++){

    sonuc=fn_1+fn_2;
    printf("%d. Eleman %d\n",sayac+1,sonuc);
    fn_2=fn_1;
    fn_1=sonuc;

}

}
else printf("Hatali giris yaptiniz(negatif)...\n");
}
int main()
{
 int girdi;
    while(1){
        scanf("%d",&girdi);
    fibonacciDizisi(girdi);
    }
    return 0;
}


