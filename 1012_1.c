#include <stdio.h>

int main(void){
    int total = 0;
    float a[5] = {0};//output
    float input = 0; 
    int input[1000] = {0};//input of every
    float zwei[1000] = {0};
    int count_fier = 0;
    int amount_fier = 0;

    scanf("%d", &total);

    for(int i=0; i<total; i++){
        while(input!=' '){
            scanf("%f", &input);
            input[i] = input;
        }
    }//?

    for(int j=0; j<total; j++){
        switch (input[j]%5) {
            case 0: if (input[j]%2 == 0) a[0] += input[j]; break;
            case 1: zwei[zwei_count++] = input[j]; break;//nicht
            case 2: a[2]++;
            case 3: {
                        amount_fier += input[j]; 
                        count_fier++; break;
                    }//nicht
            case 4: a[4] = a[4] > input[j]? a[4]:input[j]; break;
        }
    }

    for(int k=0; k<zwei_count; k++){
        if(zwei[k] % 2 == 0) a[2] += zwei[k];
        else a[2] -= zwei[k];
    }//process of zwei

    a[3] = amount_fier / count_fier;

    for(int m=0; m<5; m++){
        if(a[m]){
            if(m != 3) printf("%d", (int)(a[m]));
            else printf("%1f", a[m]);
            if(m != 4) printf(" ");
        }
        else printf("N");
    }

    return 0;
}
