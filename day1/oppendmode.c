#include <stdio.h>
void main(){
    char name [20]="saksham";
    FILE *file=fopen("data.txt","a");
    if(file==NULL){
        printf("error opening file");
        return;
        fprintf(file,"%s",name);
        printf("data is oppend to file");
        fclose(file);
    }
}
