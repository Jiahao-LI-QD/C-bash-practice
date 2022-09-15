#include <stdio.h>

main(){
    char str[1000];
    int i , j = 0, count = 0;
    float result;

    fgets( str, sizeof str, stdin);
    for  (i = 0; i < sizeof str; i++){
        if (str[i] == '.'){
            j++;
            break;
        }
        if (str[i] == ' '){
            j++;
        }
        else{
            count ++;
        }
    }
    if (count){
         result = ( count + 0.0 ) / j;
         printf("%f\n", result);
    }
    else {
        printf("Error:Only period!\n");
    }
}