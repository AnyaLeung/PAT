#include <stdio.h>

int main(void)
{
    int n, i;

    scanf("%d", &n);

    for(i=0;n!=1;i++ ) {
        if (n % 2 ) {
            n = (3 * n + 1)/2 ;
         }
        else {
            n = n / 2 ;
        }
    } 
    
    printf("%d", i);

    return 0;
}
