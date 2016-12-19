#include <stdio.h>

int main(void){
    int input = 0;
    scanf("%d", &input);
    char name[input][11];
    char no[input][11];
    int grade[input];//cannot be initialized?
    int max = 0;
    int min = 0;
    int max_index = 0;
    int min_index = 0;

    for(int i = 0; i < input; i++){
        scanf("%s %s %d", name[i], no[i], &grade[i]);//no &: assign for 1d array

        if(i == 0){
            max = grade[0];
            min = grade[0];
        }

        if(grade[i] > max){
            max = grade[i];
            max_index = i;
        }

        if(grade[i] < min){
            min = grade[i];
            min_index = i;
        }
    }

    printf("%s %s\n", name[max_index], no[max_index]);
    printf("%s %s\n", name[min_index], no[min_index]);

    return 0;
}
