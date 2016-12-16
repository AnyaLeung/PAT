#include <stdio.h>

int main(void){
    int int_digit[10] = {0}; //10 is [0-9] use the value to count times
    int count = 1;//count for min except 0 
    int input = 0;
    int i = 0;
    int j = 0;
    int m = 0;
    int no = 0;

    while(no < 10){
        scanf("%d", &input);
        int_digit[no++] = input;//int_digit[no] for num of [1-9]
    } 

    while(int_digit[count] == 0){
        count++;//min nicht 0
    }

    printf("%d", count);
    int_digit[count]--;

    while(j < 10){
        if(int_digit[j]){
            for(m = 0; m < int_digit[j]; m++){
                printf("%d", j);
            }
        }
        j++;
    }
    return 0;
} 
