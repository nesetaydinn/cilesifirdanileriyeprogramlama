#include "stdio.h"

int main(){
char test[]="ali";
char test2[]={'a','l','i','\0'};

printf("size of test %d\n",sizeof(test));
printf("test adres baslangic: %d\n",&test);
printf("test: %s\n",test);

printf("size of test2 %d\n",sizeof(test2));
printf("test2 adres baslangic: %d\n",&test2);
printf("test2: %s\n",test2);

return 0;
}
