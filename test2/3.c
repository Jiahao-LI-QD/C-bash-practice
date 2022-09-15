#include <stdio.h>

main(){
    char arr[100], str[100], *f;
    int  result[100], cap = 0 , i = 0,  j = 0, flag = 0, last = 0;

    scanf("%s", str);
    f = str;
    for (; j < sizeof str; j++ ){
        if (str[j] == '\0'){
            break;
        }
        for (i = 0; i < cap ; i++){
            if (arr[i] == str[j] ){
                result[j] = 1;
                for (flag = 0; flag < cap; flag ++){
                    if (arr[i] == str[flag]){
                        result[flag] = 1;
                        last = j;
                        break;
                    }
                    
                }
                break;
            }
        }
        if ( i == cap ){
                arr[cap++] = str[j];
                result[j] = 0;
        }
    }
    printf ("%d\n", cap);
    for (i = 0; i < j ; i ++ ){
        if (result[i]){
            printf ("%d", i);
            
            if (i != last)
            printf (",");
        }
    }
    printf ("\n");
}