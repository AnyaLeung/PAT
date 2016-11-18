#include <stdio.h>

int main(void){
    char input; //scanf
    int i;
    int sum;
    int a[1000] = {0};
    int each;


    scanf("%c", &input);
    while(input!='\n') {
        sum += (int)(input - 48);
        // while(int < 0 || int >9){ 每次输入的读取？
        // sum += each;
        scanf("%c", &input);
    } //求和

    while(sum) {
        a[i] = sum % 10;// 拆分和的各位放在数组里，计算和的位数
        sum/= 10;
        i++;
    }

    while(i-- > 1){
        switch ( a[i]){
            case 0:printf("ling ");     break;
            case 1:printf("yi ");       break;
            case 2:printf("er ");       break;
            case 3:printf("san ");      break;
            case 4:printf("si ");       break;
            case 5:printf("wu ");       break;
            case 6:printf("liu ");      break;
            case 7:printf("qi ");       break;
            case 8:printf("ba ");       break;
            case 9:printf("jiu ");      break;
        }//輸出各位 *
    }


    switch ( a[0]){
        case 0:printf("ling");     break;
        case 1:printf("yi");       break;
        case 2:printf("er");       break;
        case 3:printf("san");      break;
        case 4:printf("si");       break;
        case 5:printf("wu");       break;
        case 6:printf("liu");      break;
        case 7:printf("qi");       break;
        case 8:printf("ba");       break;
        case 9:printf("jiu");      break;
     }//輸出各位 *
    return 0;
} 
    /*char input    int input   divide  sum     divide print*/
