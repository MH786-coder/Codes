#include<stdio.h>
int main(){
    char f[100];
    FILE* file;
    file = fopen("new.txt","w");
    printf("Fill the empty file: ");
    scanf("%s",f);

    fputs(f,file);

    if(!file){
        printf("failed");
    }
    else
        printf("successfully proceed");
}