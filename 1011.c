#include <stdio.h>

int main(void){
    long a = 0; 
    long b = 0;
    long c = 0;
    int total = 0;
    int judge[10];

    scanf("%d", &total);

    for(int i = 0; i < total; i++){
        scanf("%ld %ld %ld", &a, &b, &c);

        if(a + b > c){
            judge[i] = 1;
        }
        else{
            judge[i] = 0;
        }
    }

    for(int j = 0; j < total; j++){
        if(judge[j])    printf("Case #%d: true\n", j + 1);
        else            printf("Case #%d: false\n", j + 1);
    }

    return 0;
}
