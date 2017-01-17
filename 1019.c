#include <stdio.h>
#include <math.h>

int main(void){
    char chars[4] = {0};
    int ints[4] = {0};
    int max_digit = 0, min_digit = 0;
    int larger = 0, smaller = 0;
    int max = 0, min = 0;
    int ordnen[4] = {0};

    for(int i=0; i<4; i++){
        scanf("%c", &chars[i]);  
        ints[i] = (int)(chars[i]);
    }//save every digit of the num into the array

    for(int j=0; j<4; j++){
        max_digit = max_digit > ints[j]? max_digit: ints[j];
        min_digit = min_digit < ints[j]? min_digit: ints[j];
    }//get max_digit and min_digit

    for(int k=0; k<4; k++){
        if(ints[k]!=max_digit&& ints[k]!=min_digit){
            larger = larger>ints[k]? larger: ints[k];
            smaller = smaller>ints[k]? smaller: ints[k];
        }
    }//get larger and smaller and all ints[k] ordnen

    ordnen[0] = min_digit;
    ordnen[1] = smaller;
    ordnen[2] = larger;
    ordnen[3] = max_digit;

    for(int m=0; m<4; m++){
        max += ordnen[0] * pow(10,m);
    }
    printf("%d", max);

    for(int m=3; m>-1; m--){
         
    }
}
