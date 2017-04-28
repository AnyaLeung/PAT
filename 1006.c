/* 123 BSS123 3位以内*/

#include <stdio.h>

int main(void){
    int input;
    int a[3] = {0};
    int i = 0;

    scanf("%d", &input);

    while(input){
        a[i] = input % 10;
        input /= 10;
        i++;
    }
    
    if(a[2]!=0){
     for(i = 0; i < a[2]; i++){
         putchar('B');
     }
    }

    if(a[1]!=0){
     for(i = 0; i < a[1]; i++){
         putchar('S');
     }
    }
   
    if(a[0]!=0){
     for(i = 0; i < a[0]; i++){
         printf("%d", i+1);
     }
    }

    return 0;
}
