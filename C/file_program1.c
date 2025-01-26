#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("readme.txt","r");
    if(fp==NULL){
        printf("Error opening file.");
        return 1;
    }
    while(1){
        char c=fgetc(fp);
        printf("%c",c);
        if(c==EOF){
            printf("File completed.");
            break;
        }
    }
    fclose(fp);
    return 0;//for success
}