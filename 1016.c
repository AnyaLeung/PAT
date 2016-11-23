#include <stdio.h>

/*void sf(void){
    scanf("%d", &input);
    while (input != ' '){
       a[(int)(input - 48)]++;
}*/
int main(void){
    int input;
    int a[1000] = {0};
    int Da = 0;
    int Da_no = 0;
    int i = 0;
    int Pa;

    scanf("%d", &input);
    while (input != '\n'){
       a[(int)(input - 48)]++;
       scanf("%d", &input);
    }

    scanf("%d", &Da);
    Da_no = a[Da];
    
    for(i = Da_no; i > 0; i++){
        Pa = 10 ^ i * Da;
    }
}
