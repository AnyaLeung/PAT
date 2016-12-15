//make the ultimate num min, 0 cannot be the first

#include <stdio.h>

int main(void){
    int int_digit[50] = {0};
    int i = 0; //index of the int of every digit

    scanf("%c", &input);
    while(input!='\n'){
       int_digit[i++] = (int)(input - 48);
       scanf("%c", &input);
    } //transfer every digit of char into int 

    while(i-- > 0){
        if()             
    }
    return 0;
}
