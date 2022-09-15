#include <stdio.h>
#define max 30

main(){
    char str[max];
    int x, i, mcount = 1,count = 1, length = 1, index;
    char yes[] = "YES\n", no[] = "NO\n";

    scanf("%s", &str);

    for (i = 0; i < max - 1; i++){
        if (str[i + 1] - str[i] == 1){
            count ++;
        }
        else if (str[i] - str[i + 1] == 1){
            mcount ++;
        }
        else {
            if (length < count){
                length = count;
                index = i + 1;
            }
            else if (length < mcount){
                length = mcount;
                index = i + 1;
            }
            count = 1;
            mcount = 1;
        }
    }

    printf("%d\n", length);
    for (i = 0; i < length; i++){
        printf("%c", str[i + index - length]);
    }
    printf("\n");
}