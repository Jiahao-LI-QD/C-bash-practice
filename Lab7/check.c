#include <stdio.h>

main (){
    FILE *info;
    int sum = 0, c2read, flag;
    unsigned short checksum = 0;
    char valid[] = "Valid\n", invalid[] = "Invalid\n";

    info = fopen("result.txt","r");
    if(fopen == NULL){
        printf("File could not be opened");
        return;
    }
    while ( fread(&c2read, sizeof checksum, 1,info) > 0){
        sum += c2read;
        sum += (sum >> 16);
        sum &= 0xffff;
    }
    fclose(info);

    if (sum == 0xffff){
        printf("%s",valid);
    }
    else{
        printf("%s", invalid);
    }

}