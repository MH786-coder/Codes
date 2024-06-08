#include<stdio.h>

int main(){
    char nn[100];
    printf("Enter your string: ");
    scanf("%s",nn);
    sscanf(nn,"%*s %s",nn);

    printf("%s",nn);

}