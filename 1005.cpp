#include <stdio.h>

int main(void){
    int input = 0;
    int no[100][1000] = {0};
    int m = 1;
    int i = 0;
    int result = 0;
    int num = 0; 
    int row=0, col=0;
    int flag = 0;

    scanf("%d", &input);

    while(input){
        flag = 0;
        scanf("%d", &num);
        no[i][0] = num;

        while(i > 0){
            for(int n = 0; n <= i - 1 && flag == 0; n++){
                for(int s = 0; no[n][s] && flag == 0; s++){
                    if(no[i][0] == no[n][s])    flag = 1;
                }
            }   
        }//compare sf with before, if have, assign flag, skip 0 nicht compare



        if(flag == 1) continue; //?

        while(no[i][m] != 1 && flag == 0){
            if(no[i][m] % 2 == 1)   no[i][m] = (no[i][m-1] * 3 + 1) / 2;
            else                    no[i][m] = no[i][m-1] / 2;
            m++;
        }//process and store every value

        printf("%d", input);

        printf("%d", no[i][0]);

        i++;
        input--;
    }

    return 0;
}
