/**<
*6_3_1_uygulama.c
*Bu program C dilinde: lm35 sensörünün Sıcaklık ölçüm aralıklarında
*mevcut değerden + 3 veya -3 tolerans artış veya azalma ile
*rastgele sıcaklıklar üretir ve her değişen sıcaklık değeri için
*simülasyonda ki saat değeri ile mevcut olan sıcaklık değerini
*ekrana bastırır.
*@authr Neşet Aydın
24.05.2020
*Bu Program uygulama 6.3.1 için yazılan programın son halidir.
*Videoya linkten ulaşabilirsiniz: 
Kısım 1 //https://youtu.be/ZYa1Mw3PwxM
Kısım 2 //https://youtu.be/ZYa1Mw3PwxM
*/

#include "stdio.h"
#include "stdlib.h"
static int minute,hour;


/*Belirli bir aralıkta bir sıcaklık değerini üretecek,
Zamanı güncelleyen bir fonksiyon olsun,
bu değerleri konsola bastıracak bir fonksiyon olsun,
Bu yazılan fonksiyonların init fonksiyonunu oluştur.
*/
//-55 ile 150
int randomTemp(){
static int temp,tempBef;
temp = rand()%206-55;
if(temp<=tempBef+3 && temp>=tempBef-3) tempBef=temp;
return tempBef;
}
void updateTime(){
minute++;
if(60==minute){
    minute=0;
    hour++;
    if(24==hour) hour=0;
}
}
void printToMonitor(){
    static int befTemp;

    if(befTemp!=randomTemp()){
     printf("Saat: %d:%d 'de Sicaklik= %d Derece\n",hour,minute,randomTemp());
    befTemp=randomTemp();
    }


}
int main()
{   while(1) {
updateTime();
printToMonitor();

}

    return 0;
}
