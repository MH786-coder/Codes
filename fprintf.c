#include<stdio.h>
int main(){
    FILE* fp;
    char s[100];
    fp = fopen("array.c","r");
    while(fscanf(fp,"%s",s) != EOF){
        printf("%s\n",s);
    }
    fclose(fp);    
}