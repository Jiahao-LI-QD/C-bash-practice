#include <stdio.h>

main (){
    FILE *info, *new;
    int sum = 0, c2read;
    unsigned short checksum = 0;

    info = fopen("dat.txt","r");
    new = fopen("result.txt","w");
    if(fopen == NULL){
        printf("File could not be opened");
        return;
    }

    while ( fread(&c2read, sizeof checksum, 1,info) > 0){
        sum += c2read;
        fwrite(&c2read, sizeof checksum, 1, new);
        sum += (sum >> 16);
        sum &= 0xffff;
    }
    
    fclose(info);

    checksum = sum;
    checksum = (-1) - checksum;

    fwrite(&checksum, sizeof checksum, 1, new);
    fclose(new);
}