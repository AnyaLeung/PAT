#include <stdio.h>

int main(void){
    int input = 0;
    scanf("%d", &input);
    int num = 0;
    int no[100][1000];
    int flag = 0;

    for(int i = 0; i < input; i++){
        scanf("%d", &num);
        flag = 0;
        no[i][0] = num;
        printf("%d", no[i][0]);
    }

    return 0;
}
