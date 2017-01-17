#include <stdio.h>

int main(void){
    int input = 0;
    int i = 2, j = 2;
    int no = 1;
    int count_prime_no = 0;
    int store[10000] = {0};

    scanf("%d", &input);

    store[0] = 2;

    for(int i=2; i<input+1; i++){
        for(int j=2; j<i; j++){
            if(i%j==0) break; //jugde if i is prime num, if not break
            if(j==i-1) store[no++]=i; //store prime num i into array
        }
    }

    for(int count=0; count<=no; count++){
        if(store[count+1]==store[count]+2){
            count_prime_no++; 
        }
    }

    printf("%d", count_prime_no);

    return 0;
}
