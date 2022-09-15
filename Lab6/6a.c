#include <stdio.h>
main (){
    char first[101],second[101],yes[]="YES\n", no[]="NO\n", *f, *s;
    int length1 = 0,length2 = 0, i = 0, j = 0, flag=0;
    scanf("%s", first);
    scanf("%s", second);
    f = first;
    s = second;
    while (*f++ != '\0')
    length1++;
    while (*s++ != '\0')
    length2++;
    printf("%d %d\n", length1, length2);
    for (j = 0; j < length2; j++){
        if (*first == *(second+j)){
            for(i = 0; i < length1; i++){
                if (*(first+i) != *(second + i+j)){
                    break;
                }
            }
            if(i == length1){
                flag = 1;
                break;
            }
            i = 0;
        }
    }
    printf("%s", flag ? yes : no);
    return;
}