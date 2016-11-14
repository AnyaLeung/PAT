#include <stdio.h>
#include <math.h>

int main(void){
    int i, conv, m, n, j;
    int line = 0;
    int input;
    int half_line = 0;
    int rest; 

    scanf("%d", &input);
    half_line = (int)((sqrt(1 + input)) / 2.0);

    for(line = 0; line < half_line + 1; line++){
        for(i = -1; i < line - 1; i++) { //*
            putchar(' ');
        }
        for(j = 0; j < 2 * (half_line - line) + 1; j++) {
            putchar('*');
        }
    putchar('\n');
    }

    for(rest = 0; rest < half_line; rest ++){
        for(m = 0; m < half_line - rest - 1; m++) {
            putchar(' ') ;
        }
        for(n = 0; n < 2 * rest + 3; n ++){
            putchar('*');
        }
    putchar('\n');
    }
    
    printf("%d\n", input -(2 * half_line * half_line) + 1 -10);//?

    return 0;
} 

