/*對給定的k位整數N,　編寫程序統計每種不同的個位數字出現的次數*/

#include <stdio.h>

int main(void){
    int N;//scanf
    int m;//每位上的數 
    int a[10] = {0};
    int n;
    int k = 0;//位數

    scanf("%d", &N);

    while(N > 0){
        N /= 10;
        k++; 
    }

    do{
         
    }
    while(N > 0){
        m = N % 10;
        switch (m){
            case 0 : a[0]++;    break;
            case 1 : a[1]++;    break;
            case 2 : a[2]++;    break;
            case 3 : a[3]++;    break;
            case 4 : a[4]++;    break;
            case 5 : a[5]++;    break;
            case 6 : a[6]++;    break;
            case 7 : a[7]++;    break;
            case 8 : a[8]++;    break;
            case 9 : a[9]++;    break;
        }
        N /= 10;
    }

    for(m = 0; m < 9; m++){
        printf("%d:%d\n", m, a[m]);
    }
    return 0;
}
