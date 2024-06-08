#include<stdio.h>
int main(){

    char file[10];
    FILE* get;
    get = fopen("array.c","r");

    fscanf_s(get,file,sizeof(file));

}