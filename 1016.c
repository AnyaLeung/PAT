/*void sf(int array[10]){
    scanf("%d", &input);
    while (input != ' '){
       array[(int)(input - 48)]++;
}*/

/*正整数A的“DA（为1位整数）部分”定义为由A中所有DA组成的新整数PA。 现给定A、DA、B、DB，请编写程序计算PA + PB。*/
#include <stdio.h>
#include <math.h>

int main(void){
    char input_a, input_b;
    int a[1000] = {0};
    int b[1000] = {0};
    int Db = 0;
    int Da = 0;
    int Da_no = 0;
    int Db_no = 0;
    int i = 0;
    int j = 0;
    int Pa = 0;
    int Pb = 0;
    int m = 0;
    int n = 0; 

    scanf("%c", &input_a);
    while (input_a != ' '){
       a[(int)(input_a - 48)]++;
       scanf("%c", &input_a);
    }

    scanf("%d", &Da);
    Da_no = a[Da];//count saved

    for(i = 0; i < Da_no; i++){
        m =pow(10, i) * Da;
        Pa += m;
    }


    scanf("%c", &input_b);
    scanf("%c", &input_b);
    while (input_b != ' '){
       b[(int)(input_b - 48)]++;
       scanf("%c", &input_b);
    }

    scanf("%d", &Db);
    Db_no = b[Db];
    n = 1;
    for(j = 0; j < Db_no; j++){
        Pb += n*Db;
        n *= 10;
    }

    printf("%d", Pa + Pb);
    return 0;
}
