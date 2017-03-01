#include <stdio.h>

int main(void){
    int total = 0;
    int all[1001] = {0};
    int input = 0;
    int ein[1000] = {0};
    int ein_count = 0; 
    int sum = 0;
    int zwei_count = 0;
    int drei_amount = 0;
    int max = 0;
    int k = 0;
    int A[5] = {0};
    int ein_total = 0;;
    int drei_count = 0;

    scanf("%d", &total);

    for(int i=0; i<total; i++){
        while(input!= ' '){
            scanf("%d ", &input);
            all[i] = input;
        }
    }
    //store input

    for(int j= 0; j<total; j++){
        switch (all[j]%5){
                        if(all[j]%2)    A[0] += all[j];         break;
                    } 
            case 1: ein[ein_count++] = all[j];           break;//nicht
            case 2: A[1]++;                                break;
            case 3: {
                        drei_amount += all[j]; 
                        drei_count++;   
                    }
                    break;//nicht
            case 4: max = max > all[j] ? max : all[j];   break;
        }
    }

    A[4] = max;

    for(int k = 0; k < ein_count; k++){
        if(k % 2 == 0){ //odd num
            ein_total += ein[k];
        }
        else{
            ein_total -= ein[k];
        }
    }//process of ein
    A[1] =  ein_total;

    A[3] = drei_amount / drei_count;

    for(int n = 0; n < 5; n++){
        while(A[n]){
            printf("%d ", A[n]);
        }
    }

    return 0;
}
