//count times of every digit

#include <stdio.h>

int main(void){
    char input;
    int input_to_int = 0;
    int num_digit = 0;
    int count[10] = {0};
    int i = 0;
    
    scanf("%c", &input);
    while(input!='\n') {
        input_to_int = (int)input - 48;
        count[input_to_int]+=1;
        scanf("%c", &input);
    }
    do{
        if(count[i]){
            printf("%d:%d\n", i, count[i]);
        }
        i++;
    }while(i < 10);

    return 0;
}
/*
    scanf("%d", &input);

    while(input){
        num_digit = input % 10; 
        count[num_digit]++;
        input /= 10;
    }//count how mant times each [0~9] appears


    do{
        if(count[i]){
            printf("%d:%d\n", i, count[i]);
        }
        i++;
    }while(i < 10);

    return 0;
}
*/
//00000?
