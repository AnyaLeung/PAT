#include <stdio.h>

int main(void){
    int int_digit[10] = {0}; //10 is [0-9] use the value to count times
    int count = 1;//count for min except 0 
    char char_input;
    int int_input = 0;
    int i = 0;
    int j = 0;

    scanf("%c", &char_input);
    while(char_input != '\n'){
        int_input = (int)(char_input -48);
        int_digit[int_input] += 1;
        scanf("%c", &char_input);
    } //transfer into int and record times by array

    while(int_digit[count] == 0){
        count += 1;
    }//count now is the index of the min nicht 0 

    for(i = 0; i < int_digit[count]; i++){
        printf("%d", count);
    }//print min nicht 0

    if(int_digit[0]){
        for(i = 0; i < int_digit[0]; i++){
            printf("%d", 0);
        }//print 0 if have
    }

    for(i = count + 1; i < 10; i++){
        if(int_digit[i]){
            for(j = 0; j < int_digit[i]; j++){
                printf("%d", i);
            }
        }
    }

  //  putchar('\0');

    return 0;
        }
