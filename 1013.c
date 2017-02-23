#include <stdio.h>

int main(void){
    int min = 0, max = 0;
    int no[10000] = {0};
    int count = 0;
    int j = 0;

    scanf("%d %d", min, max);

    for(no=min; no<=max; no++){
        for(int i=2; i<no; i++) {
            if(no%i==0) break;
            if(i==no-1) no[count++] = no;
        }
    }

    while(no[j]){
        printf("%d", no[j++]);
    }

    return 0;
}
