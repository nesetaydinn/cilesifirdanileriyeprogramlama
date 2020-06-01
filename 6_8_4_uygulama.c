/**<
*6_8_4_uygulama.c
*Bu program C dilinde: Biri taban biri kuvvet olmak üzere verilen 
*iki tam sayıya göre kuvvet hesaplayan yani üs alıcı fonksiyonu içerir.
*@authr Neşet Aydın
01.05.2020
*Bu Program uygulama 6.8.4 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: //https://youtu.be/E_MlEVSuoKg
*/
#include <stdio.h>
/**
6.8.4 Klavyeden girilen bir değerin kuvvetini yine klavyeden alınacak diğer bir tamsayı ile hesaplayan programı yazınız.

*/

double usAlma(int taban,int kuvvet){
double sonuc=1;
if(kuvvet<0){
for(int sayac=-1;sayac>=kuvvet;sayac--){

   sonuc*=taban;
    }
    sonuc=1/sonuc;
}
else if(kuvvet==0){
    sonuc;
}
else{
    for(int sayac=1;sayac<=kuvvet;sayac++){
        sonuc*=taban;
    }
}
return sonuc;
}
int main()
{
    printf("%g",usAlma(10,5)); //Kuvvet sıfırdan büyük
    printf("%g",usAlma(10,0)); //Kuvvet sıfıra eşit
    printf("%g",usAlma(10,-3)); //Kuvvet sıfırdan küçük

    return 0;
}
