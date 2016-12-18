//here i come -> come i here

#include <stdio.h>

int main(void){
    char input[80][80] = {0};
    int row = 0;
    int col = 0;

    scanf("%c", &input[row][col]);
    while(input[row][col] != '\n'){
        if(input[row][col] == ' ' ){
            row =0;
            col++;
        }
        row++;
    }

    printf("row:%d, col:%d", row, col);
    return 0;
}
