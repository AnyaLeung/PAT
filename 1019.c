#include <stdio.h>
#include <math.h>

int main(void){
    char chars[4] = {0};
    int ints[4] = {0};
    int max_digit = 0, min_digit = 10; 
    int larger = 0, smaller = 10;
    int max = 0, min = 0;
    int ordnen[4] = {0};
    int result = 0;
    int max_index = 100;
    int min_index = 100; //set unrelated init value!
    int time = 0;

    if(time==0){
    for(int i=0; i<4; i++){
        scanf("%c", &chars[i]);  
        ints[i] = ((int)(chars[i])-48);
    }//save every digit of the num into the array
    }

    while(result!=6174){
        if(time){
            for(int s=0; s<4; s++){
                ints[s] = result % 10;
                result /= 10;
            }
            max_digit = 0;
            min_digit = 10;
            max_index = 10;
            min_index = 10;
            larger = 0;
            smaller = 10;
            max = 0;
            min = 0;
            result = 0;
        } 

        for(int j=0; j<4; j++){
            max_digit = (max_digit>ints[j])? max_digit: ints[j];
            if(max_digit==ints[j]) max_index=j;
            min_digit = (min_digit<ints[j])? min_digit: ints[j];//sehr besonders!
            if(min_digit==ints[j]) min_index=j;
        } //get max_digit and min_digit, then remember the index to except

        for(int k=0; k<4; k++){
            if(k!=max_index&& k!=min_index){
                larger = (larger>ints[k])? larger: ints[k];
                smaller = (smaller<ints[k])? smaller: ints[k];         }
        } //get larger and smaller and all ints[k] ordnen

        ordnen[0] = min_digit;
        ordnen[1] = smaller;
        ordnen[2] = larger;
        ordnen[3] = max_digit; //from smallest to largest

        for(int m=0; m<4; m++){
            max += ordnen[m] * pow(10,m);
        } //the largest can be combined
        printf("%04d -", max);

        for(int n=3; n>-1; n--){
            min += ordnen[n] * pow(10,(3-n));
        } //smallest

       printf(" %04d", min);

       result = max - min;
       printf("result:%d", max-min);

       // printf("%d\n", result);
        printf(" = %d\n", result);

        time++;
    }
    return 0;
}
