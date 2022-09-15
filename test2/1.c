#include <stdio.h>

main(){
    char name[1000], *f[100];
    int i, j = 0;

    fgets(name, sizeof name, stdin);

    *(f + j++) = name;
    for (i = 0; i < sizeof name; i++){
        if (name[i] == '\n'){
            name[i] = '\0';
            break;
        }
        if (name[i] == ' '){
            *(f + j++) = &name[i + 1];
            name[i] = '\0';
        }
    }
    printf("%s,", *(f+ j - 1));
    for (i = 0; i < j - 1 ; i++ ){
        printf(" %c.", **(f+i));
    }
    printf("\n");
}