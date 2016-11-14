#include <stdio.h>

int main(void){
    char input; //scanf
    int i;
    int input_1 = 0;
    int input1[] = {0};
    int sum;
    int sum_w[] = {0};
    int sum_1; 
    int m = 0;
    int sum_2;    

    scanf("%c", &input);//輸入的值
     
    while ((int)input > 0);{
        input_1++; 
        input /= 10; // *
    }//計算輸入數的位數
    
     input_1 = int(input);
     
    for (i = (int)input1; i > 0; i-- ){
        input1[i] = input_1 % 10;//input1 拆分和的各位
        input_1 /= 10;
        }

    for (i = 0; i < input1; i++){
        sum += input1[i];//求各位的和

    while (sum > 0);{
        m ++; 
        sum_1 /= 10; // *
    }//計算和的位數

    for (i = m; i > 0; i-- ){
        sum_2 = sum;
        sum_w[i] = sum_2 % 10;//sum_w 拆分和的各位
        sum_2 /= 10;
        }

    for (i = 1 ; i < m; i++){// *
        switch ( sum_w[i]){
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


    while (i = m){// *
        switch ( sum_w[m]){
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
    }
    return 0;
    } 
    }
    /*char input    int input   divide  sum     divide print*/
