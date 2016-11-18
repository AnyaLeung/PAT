/*對給定的k位整數input,　編寫程序統計每種不同的個位數字出現的次數*/

#include <stdio.h>

int main(void){
    char N;//scanf
    int m;//每位上的數 
    int a[10] = {0};
    int input;

    scanf("%", &N);
    input = (int)()

    while(input > 0){
        input /= 10;
        k++; 
    }

    
    while(input>0) {
        m = input % 10;
        a[m]++;
       /* switch (m){
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
        input /= 10;
    }*/

    for(m = 0; m < 10; m++){
        printf("%d:%d\n", m, a[m]);
    }
    return 0;
}
