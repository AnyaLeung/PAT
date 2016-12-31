#include <stdio.h>

int main(void){
    int times = 0;
    char J[10000] = {0};
    char y[10000] = {0}; 
    char j_temp;
    char y_temp;
    int tie = 0;
    int y_win = 0;
    int y_win_c = 0;
    int y_win_j = 0;
    int y_win_b = 0;
    int j_win = 0;
    int j_win_c = 0;
    int j_win_b = 0;
    int j_win_j = 0;

    scanf("%d", &times);

    for(int i=0; i<times; i++){
        scanf("%c", &j_temp);
        while(j_temp=='\n' ||j_temp==' ') scanf("%c", &j_temp);
        //scanf until nicht null
        //sig
        
        scanf("%c", &y_temp);
        while(y_temp=='\n' ||y_temp==' ') scanf("%c", &y_temp);

        J[i] = j_temp;
        y[i] = y_temp;

        switch(J[i]){
            case 'J': {
                          switch(y[i]){
                              case 'J': tie++; break;
                              case 'C': {y_win++; y_win_c++; break;}
                              case 'B': {j_win++; j_win_j++; break;}
                          } break;
                      }
            case 'C':{
                         switch(y[i]){
                             case 'C': tie++; break; 
                             case 'B': {y_win++; y_win_b++; break;}
                             case 'J': {j_win++; j_win_c++; break;}
                         } break;
                     }
            case 'B':{
                         switch(y[i]){
                             case 'B': tie++; break;
                             case 'J': {y_win++; y_win_j++; break;}
                             case 'C': {j_win++; j_win_b++; break;}
                         } break;
                     }
        }
    }

    printf("%d %d %d\n", j_win, tie, y_win);
    printf("%d %d %d\n", y_win, tie, j_win);
 
    if(y_win_c>y_win_b){
        if(y_win_j>y_win_c) printf("J");
        else printf("C");
    }
    else printf("B");
  
    printf(" ");
    
    if(j_win_c>j_win_b){
        if(j_win_j>j_win_c) printf("J");
        else printf("C");
    }
    else printf("B");

    return 0;
}
//21-23 ***
