#include <stdio.h>
#define max 30

main(){
    char str[max];
    int x, i, count = 1, flag = 0;
    char yes[] = "YES\n", no[] = "NO\n";

    scanf("%s", &str);
    scanf("%d", &x);
    
    for (i = 0; i < max - 1; i++){
        if (str[i + 1] - str[i] == 1 || str[i + 1] - str[i] == 33 ||
        str[i] - str[i + 1] == 31){
            if (++count == x){
                flag = 1;
            }
        }
        else {
            count = 1;
        }
    }

    printf("%s", flag ? yes : no);
}
