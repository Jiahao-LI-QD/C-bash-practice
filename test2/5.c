#include <stdio.h>
#include <stdlib.h>
main (){
    int arr[20][20], i = 0, r = 0 , c = 0, *j , k = 0, p = 0;
    char in[101], temp[10];
    FILE *fp;
    j = *arr;
    if ((fp = fopen("data.txt", "r")) == NULL) return;

    while( fgets(in,100,fp) != NULL){
        p = 0;
        printf("\n");
        for (i = 0; i < 100; i++){
            if (*(in + i) == '\n'){
                temp[c++] = '\0';
                    arr[k][p++] = atoi(temp);
                    printf("%s\n", temp);
                    c = 0;
                break;
            }
            else {
                if (*(in + i) != ' '){
                    temp[c++] = *(in + i);
                    printf("%c ", temp[c -1]);
                }
                else {
                    temp[c++] = '\0';
                    arr[k][p++] = atoi(temp);
                    printf("%s\n", temp);
                    c = 0;
                }
            }
        }
        k++;
    };
    printf("%d %d\n",k,  p);
    
    for (i = 0; i < p; i++){
        for (c = 0; c < k; c++){
            printf("%d ", arr[c][ (i+ c) % p]);
        }
    }

    printf("\n");
}