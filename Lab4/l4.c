#include <stdio.h>

int main() {

    int a[3], count, i;

    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    for (i = 0; i < sizeof(a)/sizeof(int); i++){
        if (a[i] >= 0)
            count++;
    }

    if (count == 0){
        printf("All Negative\n");
    }
    else if (count == 3){
        printf("All Positive\n");
    }
    else {
        count = a[0] + a[1] + a[2];
        if (count < 0){
            printf("Negative wins\n");
        }
        else {
            printf("Positive wins\n");
        }
    }

}