#include <stdio.h>
#include <math.h>
#define r 3
#define col 10
void main(){
    char board[r][col] = {
        {'Q','W','E','R','T','Y','U','I','O','P'},
        {'A','S','D','F','G','H','J','K','L'},
        {'Z','X','C','V','B','N','M'}
    };
    int i, j, x, y;
    char a, b;
    
    scanf("%c", &a);
    scanf(" %c", &b);

    for (i = 0; i < r; i++){
        for (j = 0; j < col; j++){
            if (a == board[i][j]) break; 
        }
        if (j < col){
            if (a == board[i][j]) break;
        }

    }
    for (x = 0; x < r; x++){
        for (y = 0; y < col; y++){
            if (b == board[x][y]) break; 
        }
        if (y < col){
            if (b == board[x][y]) break;
        }
    }
    int dis = (x - i) * (x - i) + (y - j) *(y - j);
    dis = sqrt(dis);
    printf("%d\n", dis);

    return;
}