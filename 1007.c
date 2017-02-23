#include <stdio.h>

int main(void){
    int min = 0, max = 0;
    int no[10000] = {0};
    int count = 0;
    int j = 0;
    int num = 0;
    
    scanf("%d %d", &min, &max);
    
    for(num=min; num<=max; num++){
        for(int i=2; i<num; i++) {
            if(num%i==0) break;
            if(i==num-1) no[count++] = num;
        }
    }
    
    while(no[j]){
        printf("%d", no[j++]);
    }
   
    return 0;
}
