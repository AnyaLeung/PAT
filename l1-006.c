#include <stdio.h>

int main(void){

    int input;
    int i = 1;
    int m = 0;
    int a[m];
    int n = 0;

    scanf("%d", &input);

    for (i = 1; i <= input; i++){
        if (input % i == 0) {
            a[m] = i;
            input /= i;
        }
        printf("%d", i);
    }

    for(n = 0; n < m-1; n++ ){
         printf("%d*", a[m-1]);
    }

    while(n = m){
         printf("%d", a[m]);
    }
         return 0;
}
