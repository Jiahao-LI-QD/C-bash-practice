#include <stdio.h>
#define max 30

main(){
    char str[max];
    int x, i, count = 1, flag;
    char yes[] = "YES\n", no[] = "NO\n";
    flag = 0;

    scanf("%s", &str);
    scanf("%d", &x);

    for (i = 0; i < max - 1; i++){
        if (str[i + 1] - str[i] == 1){
            if (++count == x){
                flag = 1;
            }
        }
        else {
            count = 1;
        }
    }
    printf("%s", str);
    printf("%s", flag ? yes : no);
}