#include <stdio.h>
#define max 30
main(){
    char str[max];
    int x, i, count = 1, length = 1;
    char yes[] = "YES\n", no[] = "NO\n";

    scanf("%s", &str);

    for (i = 0; i < max - 1; i++){
        if (str[i + 1] - str[i] == 1){
            count ++;
        }
        else {
            length = (count > length) ? count : length;
            count = 1;
        }
    }

    printf("%d\n", length);
}