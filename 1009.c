//here I come --> come I here

#include <stdio.h>

int main(void){
    char input[80][80]={0};
    int row = 0;
    int col = 0;

    scanf("%c", &input[row][col]);
    while(input[row][col] != '\n'){
        if(input[row][col] != ' '){
            row ++; 
        }
        else {
            input[row][col] = '#';
            col++;
            row = 0;
        }
        scanf("%c", &input[row][col]);
    }

    input[row][col] = '#';
    col++;
    row = 0;
    input[row][col] = '#';

    while(col >= 0){
        if(input[row][col] == '#'){
            col --;
            row = 0;
            if(input[row+1][col+1] && col != -1){
                printf(" ");
            }
        }
        printf("%c", input[row][col]);
        row++;
        }

    return 0;
}
