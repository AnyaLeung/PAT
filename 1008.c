#include <stdio.h>

int main(void){
    int input[100] = {0};
    int total_no = 0; 
    int move = 0;

    scanf("%d %d", &total_no, &move);

    for(int i = 0; i < total_no; i++){
        scanf("%d", &input[i]);
    }

    for(int j = total_no - move; j < 2 * total_no - move; j++){
        /*    if(j < total_no){
              printf("%d ", input[j]);
              }
              else{*/
        printf("%d", input[j % total_no]);
        if(j != 2 * total_no - move - 1){
            printf(" ");
        }
    }

    return 0;
}
//3 % 6 = 3
//if n else ain't necessary
