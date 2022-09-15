#include <stdio.h>
#define max 30

main(){
    char str[max];
    int x, i, count = 1, length = 0, index;
    char yes[] = "YES\n", no[] = "NO\n";

    scanf("%s", &str);

    for (i = 0; i < max - 1; i++){
        if (str[i + 1] - str[i] == 1){
            count ++;
        }
        else {
            if (length < count){
                length = count;
                index = i + 1;
            }
            
            count = 1;
        }
    }

    printf("%d\n", length);
    for (i = 0; i < length; i++){
        printf("%c", str[i + index - length]);
    }
    printf("\n");
}