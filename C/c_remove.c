//program to read contents from the file.
#include <stdio.h>

int main(){
    FILE* fp;
    char ch;
    fp=fopen("test.txt","r");
    if(fp==NULL){
        printf("Error opening file.");
    }else{
        if((ch=fgetc(fp))!=EOF){
            printf("%c",ch);
            //putchar(ch);
        }
    }
    fclose(fp);
    return 0;
}

/*
//program to remove a file.
#include <stdio.h>
int main(){
    FILE* fp;
    if(remove("abc.txt")==0){
        printf("File removed successfully.");
    }else{
        printf("Error removing file.");
    };
    return 0;
}*/
