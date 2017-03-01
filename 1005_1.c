#include <stdio.h>

int main(void){
    int input = 0;
    int num = 0;
    int no[10000] = {0};
    int count = 0;

    scanf("%d", &input);

    for(int i = 0; i < input; i++){
        scanf("%d", &num);
        no[count] = num;

        while(num != 1){
            if(num % 2 == 0){
                num = num / 2; 
            }
            else{
                num = (num * 3 - 1 ) / 2;
            }
            count++;
            no[count] = num;
        }

        while(no[count]){
            printf("%d", no[count]);
        }

    }
    while(no[count]){
    printf("%d", no[count]);
    }
    return 0;
}
