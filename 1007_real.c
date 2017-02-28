#include <stdio.h>

int main(void){
    int bound_no = 0;
    int no[10000] = {0};
    int count = 0;
    int count_prime_pair = 0;
    int m = 0;
    int flag = 0;
    
    scanf("%d", &bound_no);
    
    for(int i=0; i<bound_no+1; i++){
        flag = 0;
        for(int j=2; j<bound_no-1&&flag==0;j++){
            if(i%j==0&&j!=i) flag=1;
            if(j==bound_no-2&&i!=1&&i!=2) no[count++]=i;
        }
    } //save all the prime into the no[10000]
    
    do{
        if(no[m]+2==no[m+1]) count_prime_pair++;
        m++;
    }while(no[m]);
    
    printf("%d", count_prime_pair);
    
    return 0;
}
