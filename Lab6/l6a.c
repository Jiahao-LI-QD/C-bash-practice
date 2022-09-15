#include <stdio.h>
main (){
    char first[101],second[101],yes[]="YES\n", no[]="NO\n";
    int length1 = 0,length2 = 0, i = 0, j = 0, flag=0;
    
    // scanf("%s", &first);
    // scanf("%s", &second);
    fgets(first, sizeof first, stdin);
    fgets(second, sizeof second, stdin);
    while (first[length1] != '\n')    
    length1++;
    while (second[length2] != '\n')    
    length2++;

    for (j = 0; j < length2; j++){
        if (second[j] == first[i]){
            for(i = 0; i < length1; i++){
                if (first[i] != second[i + j]){
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