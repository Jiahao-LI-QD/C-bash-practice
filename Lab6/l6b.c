#include <stdio.h>

main(){
    char first[101],second[101],*f,*s;
    int length1 = 0,length2 = 0, i = 0, j = 0, flag=0, max1 = 0, max2 = 0;
    
    scanf("%s", &first);
    scanf("%s", &second);

    while (first[length1] != '\0')    
    length1++;
    while (second[length2] != '\0')    
    length2++;

    if (length1 > length2){
        flag = length2;
    }
    else{
        flag = length1;
    }
        

    for (j = 0; j < flag; j++){
        for (i = 0; i <= j; i++){
            if (first[length1 - 1 - j + i] != second[i]){
                break;
            }
        }
        if (i == j + 1){
            max1 = i;
        }
        i = 0;
    }

    for (j = 0; j < flag; j++){
        for (i = 0; i <= j; i++){
            if (second[length2 - 1 - j + i] != first[i]){
                break;
            }
        }
        if (i == j + 1){
            max2 = i;
        }
        i = 0;
    }

    if (max1 < max2){
        max1 = max2;
    }
    
    printf("%d\n", max1);
    return;
}